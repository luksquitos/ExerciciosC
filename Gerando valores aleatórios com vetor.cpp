//Preencha um vetor de 10 valores inteiros aleat�rios e escreva de forma ordenada.
//Lucas Martins Caetano - 2120474
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	//Gera valores a cada segundo. 
	//Sem isso ele geraria valores aleat�rios apenas na primeira execu��o
	srand(time(0)); 
	int vetor[10];
	printf("Os valores adicionados de forma aleat�ria ficaram\n");
	
	for(int cont = 0; cont < 10; cont++){
		vetor[cont] = rand() % 99;
		printf("Vetor[%i] = {%i};\n", cont, vetor[cont]);
	}
	
	
	
	return 0;	
}
