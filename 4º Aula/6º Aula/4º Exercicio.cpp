//Fa�a uma sub-rotina que receba como par�metro o raio de uma esfera, 
//calcule e mostre no programa principal o seu volume: v = 4/3 * R�.
//
//Aluno: Lucas Martins Caetano

#include <stdio.h>
#include <locale.h>
#include <math.h>

float func(float r)
{
	float n = 4;
	float v = (4 * 3.14 * pow(r, 3)) / 3;
	return v;
	
}

main()
{
	float raio;
	setlocale(LC_ALL, "portuguese");
	printf("Digite o valor do raio: ");
	scanf("%f", &raio);
	printf("O volume � %.2f", func(raio));
}
