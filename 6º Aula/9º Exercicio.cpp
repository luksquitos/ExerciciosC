//Crie uma sub-rotina que receba como par�metro um valor inteiro e positivo e retorne a soma dos divisores desse valor.
//
//Aluno: Lucas Martins Caetano.
#include <stdio.h>
#include <locale.h>

func(int x)
{
	int soma = 0;
	for(int i = 1; i <= x; i++){
		if(x % i == 0){
			soma += i;
		}
	}return soma;
}

main()
{
	int a;
	setlocale(LC_ALL, "portuguese");
	printf("Digite um valor: ");
	scanf("%i", &a);
	printf("A soma dos divisores � %i", func(a));
	
}
