//2. Criar uma fun��o que verifique se um n�mero digitado pelo usu�rio � primo.
//Aluno: Lucas Martins Caetano


#include <stdio.h>
#include <locale.h>


int primo(int num){
	int numDivisao = 0;
	
	for (int i = 1; i <= num; i++){
		if (num % i == 0){
			numDivisao += 1;
		}
	}
	if (numDivisao == 2) {
		return 1;
	}else{
		return 0;
	}
}

main(){
	int numero;
	
	setlocale(LC_ALL, "Portuguese");
	printf("Digite um n�mero: ");
	scanf("%i", &numero);
	
	int resultado = primo(numero);
	if (resultado == 1) {
		printf("� primo");
	}else{
		printf("N�o � primo");
	}
	
	
}
