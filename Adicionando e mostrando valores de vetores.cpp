//Adicionando e Mostrando valores de vetores.

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	int vetor[10];   //Podem ser armazenados 10 valores aqui
					//De 0 à 9	
	for(int cont = 0; cont < 10; cont ++){
		printf("Digite um valor para a posição %i: ", cont);
		scanf("%i", &vetor[cont]);
		
	}
	printf("==MOSTRANDO OS VALORES==\n");
	for(int cont = 0; cont < 10; cont ++){
		printf("%iº Valor: %i\n", cont + 1, vetor[cont]);
		
	}
	
	return 0;
}

