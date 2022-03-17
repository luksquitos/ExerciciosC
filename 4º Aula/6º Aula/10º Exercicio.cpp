//Crie uma sub-rotina que receba como parâmetro dois valores X e Z, calcule e retorne Xz sem utilizar funções ou operadores de potência prontos.
//
//Aluno: Lucas Martins Caetano.

#include <stdio.h>
#include <locale.h>

func(int x, int z)
{
	int soma = 1;
	for(int i = 1; i <= z; i++){
		soma *= x;
	}return soma;
}

main()
{	
	int a, b;
	setlocale(LC_ALL, "portuguese");
	printf("Digite o valor da base: ");
	scanf("%i", &a);
	printf("Digite o valor do expoente: ");
	scanf("%i", &b);
	printf("O resultado deu %i", func(a, b));
}

