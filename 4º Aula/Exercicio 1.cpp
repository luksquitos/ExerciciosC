/*Fa�a uma fun��o que receba 3 n�meros inteiros por par�metro: a,b e c, onde a deve 
ser maior que 1. A fun��o deve somar todos os inteiros entre b e c que sejam divis�veis 
por a (inclusive b e c) e retornar o resultado para a fun��o principal.*/

//Aluno: Lucas Martins Caetano


#include <stdio.h>
#include <locale.h>



	int soma_numeros (int a, int b, int c){
		int soma = 0;
		
		if(a > 1) {
			for (int i = b; i <= c; i++){
				if (i % a == 0){
					soma += i;
				}	
			}
			return soma;	
		}else{
			return 0;
		}	
	}
	
	
main(){
		
	setlocale(LC_ALL, "Portuguese");
			
	int a, b, c, resultado;
	
	printf("Digite tr�s valores. \n");
	scanf("%i%i%i", &a, &b, &c);
	resultado = soma_numeros(a, b, c);
	printf("O resultado deu %i", resultado);	
	
}
