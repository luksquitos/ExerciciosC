//Faça um programa que preencha um vetor com quinze elementos inteiros e verifique a 
//existência de elementos iguais a 30, mostrando as posições em que apareceram.

#include<stdio.h>
#include<math.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	int vetores[15], indext[15], quantt = 0;
	bool permissao = false;
	
	printf("Escreva 15 valores. ");
	for(int i = 0; i <= 15; i++){
		
		if(!permissao && i != 15){
			scanf("%i", &vetores[i]);
			if(vetores[i] == 30){
				indext[quantt] = i;
				quantt++;
			}	
		}else if (!permissao){
			i = 0;
			permissao = true;
			printf("Os 30 apareceram na posição: \n");
		}else{
			printf("%i\n", indext[i]);
			if(i == quantt){
				break;
			}
		}
	}
	
}


