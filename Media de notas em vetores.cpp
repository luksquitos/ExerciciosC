#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	float notas[5], somaNotas;
	float mediaNotas = somaNotas / 5;
	
	for (int cont = 0; cont < 5; cont++){
		printf("Digite o %iº valor: ", cont + 1);
		scanf("%f", &notas[cont]); // Para escrever números em float, usa "," ao invés de "." 
		somaNotas = somaNotas + notas[cont];
	}
	printf("A soma das notas foi de %f\n", somaNotas);		
	printf("A media das notas foi de %f", mediaNotas);
	
	
	return 0;
}
