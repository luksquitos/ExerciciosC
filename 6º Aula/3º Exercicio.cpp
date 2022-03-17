//3. Elabore uma sub-rotina que receba dois números como parâmetros e retorne 0, 
//se o primeiro número for divisível pelo segundo número. Caso contrário, deverá retornar o próximo divisor.
//
//Aluno: Lucas Martins Caetano

#include<stdio.h>
#include<locale.h>

func(int a, int b)
{
	if (a % b == 0){
		return 0;
	} else {
		for(int i = b; i <= a; i++){
			if(a % i == 0){
				return i;
			}	
		}
	}
}

main()
{
	int x, y;
	
	setlocale(LC_ALL, "portuguese");
	printf("Digite dois valores\n");
	scanf("%i%i", &x, &y);
	

	if(func(x, y) == 0){
		printf("\nOs dois eram divisíveis");	
	} else {
		printf("\nO próximo divisor é %i", func(x, y));
	}
}

