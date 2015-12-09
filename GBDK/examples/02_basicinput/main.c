#include <gb/gb.h>
#include <gb/drawing.h>

void main()
{
	UBYTE keys = 0;
	gotogxy(1,1);
	gprintf("GAMEBOY PAD TEST");
	gotogxy(1,2);
	gprintf("----------------");
	
	gotogxy(1,4);
	gprintf("Start : 0");
	gotogxy(1,5);
	gprintf("Select: 0");
	gotogxy(1,6);
	gprintf("Up    : 0");
	gotogxy(1,7);
	gprintf("Down  : 0");
	gotogxy(1,8);
	gprintf("Left  : 0");
	gotogxy(1,9);
	gprintf("Right : 0");
	gotogxy(1,10);
	gprintf("A     : 0");
	gotogxy(1,11);
	gprintf("B     : 0");
	
	while(1)
	{
		wait_vbl_done();
		
		keys = joypad();
		if( keys & (J_START))
		{
			gotogxy(9,4);
			gprintf("1");
		}else
		{
			gotogxy(9,4);
			gprintf("0");
		}		
		if( keys & (J_SELECT))
		{
			gotogxy(9, 5);
			gprintf("1");
		}else
		{
			gotogxy(9, 5);
			gprintf("0");
		}
		if( keys & (J_UP))
		{
			gotogxy(9, 6);
			gprintf("1");
		}else
		{
			gotogxy(9, 6);
			gprintf("0");
		}
		if( keys & (J_DOWN))
		{
			gotogxy(9, 7);
			gprintf("1");
		}else
		{
			gotogxy(9, 7);
			gprintf("0");
		}
		if( keys & (J_LEFT))
		{
			gotogxy(9, 8);
			gprintf("1");
		}else
		{
			gotogxy(9, 8);
			gprintf("0");
		}
		if( keys & (J_RIGHT))
		{
			gotogxy(9, 9);
			gprintf("1");
		}else
		{
			gotogxy(9, 9);
			gprintf("0");
		}
		if( keys & (J_A))
		{
			gotogxy(9, 10);
			gprintf("1");
		}else
		{
			gotogxy(9, 10);
			gprintf("0");
		}
		if( keys & (J_B))
		{
			gotogxy(9, 11);
			gprintf("1");
		}else
		{
			gotogxy(9, 11);
			gprintf("0");
		}		
	}
	
}