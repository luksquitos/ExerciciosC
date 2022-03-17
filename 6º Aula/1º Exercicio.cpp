//1. Faça uma sub-rotina que receba um número inteiro e positivo N como parâmetro e retorne a 
//soma dos números inteiros existentes entre o número 1 e N (inclusive).
//
//Aluno: Lucas Martins Caetano 


#include<stdio.h>
#include<locale.h>

 

func(int valor)
{
	int somatorio = 0;
	for (int i = 1; i <= valor; i++) {
		somatorio += i;
	}
	return somatorio;
}

main()
{
	int entrada;
	setlocale(LC_ALL, "portuguese");
	
	printf("Digite um valor ");
	scanf("%i", &entrada);
	printf("O resultado deu %i", func(entrada));
}
