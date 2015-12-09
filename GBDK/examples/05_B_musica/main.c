#include <gb/gb.h>
#include <gb/drawing.h>

// libreria musical Antonio Niño Díaz
#include "mod2gbt/gbt_player.h"

extern const unsigned char * song_Data[];

///////////////////////////////////////////////
//  punto de entrada
///////////////////////////////////////////////
void main(){

    disable_interrupts();       // desactiva las interrupciones

	gbt_play(song_Data, 2, 7);  // reproduce la cancion, en banco indicado y a la velocidad dada
	gbt_loop(0);                // activa/desactiva el loop

	add_VBL(gbt_update);        // actualiza el player, ha de ejecutarse cada frame (cambia a banco 1)

	set_interrupts(VBL_IFLAG);  // añade la interrupcion VBL
	enable_interrupts();        // activa las interrupciones

	gotogxy(1, 1);
    gprintf("GAMEBOY SOUND TEST");
    gotogxy(1, 2);
    gprintf("------------------");
	gotogxy(1, 13);
	gprintf("OMGESTAPASANDO");
	gotogxy(12, 14);gprintf("Maikel");
	

	// bucle infinito
	while(1){
        // sincroniza con el blanqueo vertical para dibujar los graficos y pone los contadores (timers)
        wait_vbl_done();
	}
}
