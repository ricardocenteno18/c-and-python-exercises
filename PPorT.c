//ROCK, PAPER, SCISSORS GAME
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main()
{
	int playerschoice, computerschoice; 
	srand(time(NULL));
	printf("Hoy jugaremos al Piedra, Papel o Tijeras C:\n");
	printf("Las reglas son sencillas \n");
	printf("Lo unico que debes hacer es escoger una de las 3 opciones \n");
    printf("Escribe====>\n1 para piedra \n2 para papel \n3 para tijeras\n");
	printf("Piedra... Papel... Tijera...  ");
    scanf("%d", &playerschoice);
 
    computerschoice=rand()%3+1;
    printf("La PC dice:  %d\n", computerschoice);
	
	
    if(playerschoice==3&&computerschoice==2 || playerschoice==2&&computerschoice==1 || playerschoice==1&&computerschoice==3){
	printf("Increible, me haz ganado, felicidades C:");}

    else if(playerschoice==1&&computerschoice==2 || playerschoice==2&&computerschoice==3 || playerschoice==3&&computerschoice==1){
	printf("Sigue participando, :C ");}
	
    else if(playerschoice==1&&computerschoice==1 || playerschoice==2&&computerschoice==2 || playerschoice==3&&computerschoice==3){
	printf("Empate");}
 
    return 0;
}
