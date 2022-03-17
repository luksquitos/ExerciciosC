//5. Faça uma sub-rotina que receba um valor inteiro e verifique se ele é positivo ou negativo.

//Aluno: Lucas Martins Caetano.

#include <stdio.h>
#include <locale.h>

func(int num)
{
	if (num >= 0){
		return 0;
	} else {
		return 1;
	}
}

main()
{
	int num;
	
	setlocale(LC_ALL, "portuguese")	;
	printf("Digite um valor: ");
	scanf("%i", &num);
	if(func(num) == 0){
		printf("Positivo");
	} else {
		printf("Negativo");
	}
}
