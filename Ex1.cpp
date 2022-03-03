#include <stdio.h>

/*Faça uma função que receba 3 números inteiros por parâmetro: a,b e c, onde a deve 
ser maior que 1. A função deve somar todos os inteiros entre b e c que sejam divisíveis 
por a (inclusive b e c) e retornar o resultado para a função principal.*/


	int soma_numeros (int a, int b, int c){
		int soma = 0;
		
		if(a > 1) {
			for (int i = b; i <= c; i++){
				if (i % a == 0){
					soma += i;
				}	
			}
			return (soma);	
		}else{
			return 0;
		}	
	}
	
	
main(){
		
		
			
	int a, b, c, resultado;
	
	printf("Digite três valores. ");
	scanf("%i%i%i", &a, &b, &c);
	resultado = soma_numeros(a, b, c);
	printf("O resultado deu %i", resultado);	
	
}
