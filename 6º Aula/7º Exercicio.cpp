//7. Elabore uma sub-rotina que leia um n�mero n�o determinado de valores positivos e retorne a m�dia aritm�tica desses valores. 
//Terminar a entrada de dados com o valor zero.
//
//Aluno: Lucas Martins Caetano

#include<stdio.h>
#include<locale.h>

float func(int *args, float quant)
{
	int soma = 0;
	for(int index = 0; index <= quant; index++){
		soma += args[index];
	}
	float media = soma / quant;
	return media;
}

main(){
	int valores[99];
	int index = 0, entrada;
	
	
	setlocale(LC_ALL, "portuguese");
	while(entrada != 0){
		printf("Digite um valor: ");
		scanf("%i", &entrada);
		valores[index] = entrada;
		index++;
	}
	printf("A m�dia deu %f", func(valores, index));
	
}
