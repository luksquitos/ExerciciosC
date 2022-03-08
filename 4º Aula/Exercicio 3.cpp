//3. Faça uma função que leia 5(cinco) valores inteiros e retorne o maior, o menor deles e a
//média dos digitados
//Aluno: Lucas Martins Caetano

#include <stdio.h>
#include <locale.h>

int f(int *args)
{
	int maior = 0, menor = args[0];
	float soma;
	
	for (int index = 0; index < 5; index ++){
		if (args[index] > maior){
			maior = args[index];
		}
		if (args[index] < menor) {
			menor = args[index];
		}
		soma += args[index];
	}
	float media = soma / 5;
	printf("\nO maior valor digitado foi: %i\n", maior);
	printf("O menor valor digitado foi: %i\n", menor);
	printf("A média foi de: %.2f\n", media);
}

main(){
	setlocale (LC_ALL, "Portuguese");
	
	int valores[5];
	
	//Entrada de valores
	printf("Digite 5 valores inteiros.\n");
	for (int c = 0; c < 5; c++){
		scanf("%i", &valores[c]);
	}
	
	f(valores);
}
