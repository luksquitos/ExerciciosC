//3. Elabore uma sub-rotina que receba dois n�meros como par�metros e retorne 0, 
//se o primeiro n�mero for divis�vel pelo segundo n�mero. Caso contr�rio, dever� retornar o pr�ximo divisor.
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
		printf("\nOs dois eram divis�veis");	
	} else {
		printf("\nO pr�ximo divisor � %i", func(x, y));
	}
}

