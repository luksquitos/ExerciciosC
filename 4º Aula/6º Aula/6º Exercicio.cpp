//6. Crie uma sub-rotina que receba como par�metro a altura (alt) e o sexo de uma pessoa e retorne seu peso ideal. 
//Para homens, dever� calcular o peso ideal usando a f�rmula: 
//peso ideal = 72.7 *alt - 58; para mulheres: peso ideal = 62.1 *alt - 44.7.
//
//Aluno: Lucas Martins Caetano

#include <stdio.h>
#include <locale.h>

float func(char sexo, float altura)
{
	float pi;
	if (sexo == 'M') {
		pi = (72.7 * altura) - 58;
		return pi;
	} else if (sexo == 'F') {
		pi = (62.1 * altura) - 44.7;
		return pi;
	} else {
		return 0;
	}
//	return pi;
}

main()
{
	float alt;
	char sexo;
	
	setlocale(LC_ALL,"portuguese");
	
	printf("Digite seu sexo (F/M): ");
	scanf("%c", &sexo);
	printf("Digite sua altura (m): ");
	scanf("%f", &alt);
	
	if(func(sexo, alt) == 0) {
		printf("Sexo inv�lido");
	} else {
		printf("O Peso ideal � %f", func(sexo, alt));
	}
}
