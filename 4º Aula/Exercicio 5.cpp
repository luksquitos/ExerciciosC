//5. Crie uma fun��o que receba como par�metro um valor inteiro e positivo N, e retorne o 
//valor de S, obtido pelo seguinte c�lculo:
//S = 1 + 1 / 1! + 1 / 2! + 1 / 3!...+ 1 / n!

//Aluno: Lucas Martins Caetano.

#include<stdio.h>
#include <locale.h>

int somatorioFatorial(int x)
{
	float dividendo = 1, somatorio = 0;
	
	for (int a = x; a > 0; a--){
		for (int b = a; b > 0; b--){
			somatorio += dividendo / b;
		}
		if (a == 1){
			somatorio += 1;
		}
	}
	printf("\nO somat�rio deu %.4f", somatorio);
//	return somatorio;
}

main(){
	setlocale(LC_ALL, "portuguese");
	int num;
	float func;
	
	printf("Digite um n�mero\n");
	scanf("%i", &num);
	func = somatorioFatorial(num);
//	printf("O somat�rio deu %f", func);
//Perguntar para o professor porque da forma dos comentarios n�o funciona o valor do float.
		
}
