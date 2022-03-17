//2. Crie uma sub-rotina que receba três números inteiros como parâmetros, representando horas, 
//minutos e segundos, e os converta em segundos. Exemplo: 2h, 40min e 10s correspondem a 9.610 segundos.
//
//Aluno: Lucas Martins Caetano.
//

#include<stdio.h>
#include<locale.h>


func(int h, int m, int s)
{
	int soma;
	soma = (3600 * h) + (60 * m) + s;
	
	return soma;
}

main()
{
	int h, m, s;
	setlocale(LC_ALL, "portuguese");
	
	printf("Digite um horário para a conversão no formato HH:MM:SS\n");
	scanf("%i %*c %i %*c %i", &h, &m, &s);
	printf("O horário digitado deu %i", func(h, m, s));	
}
