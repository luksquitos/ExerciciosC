// Uma escola deseja saber se existem alunos cursando, simultaneamente, as disciplinas Lógica e Linguagem de Programação. 
//Coloque os números das matriculas dos alunos que cursam Lógica em um vetor, no máximo quinze alunos. 
//Coloque os números das matriculas dos alunos que cursam Linguagem de Programação em outro vetor, no máximo dez alunos.
// Mostre o número das matriculas que aparecem nos dois vetores.

//Lucas Martins Caetano - 2120474

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	int logic[15], prog[10];
	
	printf("Digite 15 matrículas para Lógica\n");
	for(int cont = 0; cont < 15; cont++){
		scanf("%i", &logic[cont]);	
	}
	
	printf("Digite 10 matrículas de Linguagem de Programação\n");
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
