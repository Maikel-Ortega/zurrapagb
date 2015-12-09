mod2gbt\mod2gbt mod2gbt/template2.mod song -c 2
move output.c mod2gbt
lcc -c -o main.o main.c
lcc -c -o output.o mod2gbt/output.c
lcc -c -o gbt_player.o mod2gbt/gbt_player.s
lcc -c -o gbt_player_bank1.o mod2gbt/gbt_player_bank1.s
lcc -Wl-yt1 -Wl-yo4 -o rom.gb main.o output.o gbt_player.o gbt_player_bank1.o
del *.o 
bgb.exe rom.gb
pause
