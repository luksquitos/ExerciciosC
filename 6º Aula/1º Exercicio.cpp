//1. Fa�a uma sub-rotina que receba um n�mero inteiro e positivo N como par�metro e retorne a 
//soma dos n�meros inteiros existentes entre o n�mero 1 e N (inclusive).
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
