//8. Fa�a uma sub-rotina que receba um valor inteiro e positivo, calcule e mostre seu fatorial.
//
//Aluno: Lucas Martins Caetano

#include <stdio.h>
#include <locale.h>

func(int x)
{
	int soma = 1;
	for(int i = x; i > 0; i--){
		soma *= i;
	}
	return soma;
}

main()
{
	int valor;
	
	setlocale(LC_ALL, "portuguese");
	printf("Digite um valor: ");
	scanf("%i", &valor);
	printf("%i ! � %i", valor, func(valor));
	
}


