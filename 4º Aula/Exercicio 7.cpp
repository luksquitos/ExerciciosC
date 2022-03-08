//7. Faça uma função que receba como parâmetro um valor N(inteiro e maior ou igual a 1) 
//e determine o valor da sequencia S, descrita a seguir e retorne o valor para o programa 
//principal: S = 1 + 1/1 + 1/2 + ... + 1/n

//Aluno: Lucas Martins Caetano.

#include <stdio.h>
#include <locale.h>


somatorio (int valor)
{
	float div = 1, s = 0;
	
	for(int a = valor; a > 0; a--){
		s += div / a;
	}
	printf("\nO resultado deu %.4f", s);
}

main()
{
	int x;
	setlocale(LC_ALL, "portuguese");
	
	printf("Digite um número\n");
	scanf("%i", &x);
	somatorio(x);		
}


