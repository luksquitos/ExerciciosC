//Escreva um programa que simule o lan�amento de uma moeda. 
//Para cada lan�amento da moeda, o programa deve imprimir Cara ou Coroa. 
//Deixe o programa lan�ar a moeda 100 vezes e conte o n�mero de vezes que cada lado da moeda aparece. 
//Imprima os resultados. 
//O programa deve chamar uma fun��o separada jogada que n�o utiliza argumentos e retorna 0 para coroa e 1 para cara.

//Alunos: Lucas Martins Caetano e Jer�nimo Neto

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

caracoroa()
{
	
	return rand() % 2;
		
}

main()
{	srand(time(NULL));
	int cara = 0, coroa = 0;
	printf("----------CARA OU COROA----------");
	
for (int i = 1; i < 101; i++)
{
		int result = caracoroa();
		if (result == 0){
			printf("Cara, ");
			cara += 1;
		} else {
			printf("Coroa, ");
			coroa += 1;
		}
		
	}
	printf("\nTeve %i caras\n", cara);
	printf("Teve %i coroas", coroa);
}
