// Uma escola deseja saber se existem alunos cursando, simultaneamente, as disciplinas L�gica e Linguagem de Programa��o. 
//Coloque os n�meros das matriculas dos alunos que cursam L�gica em um vetor, no m�ximo quinze alunos. 
//Coloque os n�meros das matriculas dos alunos que cursam Linguagem de Programa��o em outro vetor, no m�ximo dez alunos.
// Mostre o n�mero das matriculas que aparecem nos dois vetores.

//Lucas Martins Caetano - 2120474

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	int logic[15], prog[10];
	
	printf("Digite 15 matr�culas para L�gica\n");
	for(int cont = 0; cont < 15; cont++){
		scanf("%i", &logic[cont]);	
	}
	
	printf("Digite 10 matr�culas de Linguagem de Programa��o\n");
	for (int cont = 0; cont < 10; cont++){
		scanf("%i", &prog[cont]);
	}
	printf("Os repetidos foram: \n"); 
	for(int indLogic = 0; indLogic < 15; indLogic++){
		for(int indProg = 0; indProg < 10; indProg++){
			if(logic[indLogic] == prog[indProg]){
				printf("%i", &logic[indLogic]);
				
			}
		}
	}
	
	return 0;
}
