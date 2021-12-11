#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	//As variáveis podiam ter sido declaradas em linhas diferentes
	//Também podem receber seu valor na frente
	//int idade = 20
	int idade, idadeMae, idadePai, idadeIrmao, somaIdades;
	printf("Digite sua idade\n");
	scanf("%i", &idade);
	printf("Digite a idade do pai\n");
	scanf("%i", &idadePai);
	printf("Digite a idade da mãe\n");
	scanf("%i", &idadeMae);
	printf("Digite a idade do irmão\n");
	scanf("%i", &idadeIrmao);
	
	somaIdades = idade + idadeMae + idadePai + idadeIrmao;
	
	printf("A soma das idades foi de %i anos", somaIdades);
	
	// Não é uma boa ideia fazer scanf("%i\n"), porque essa quebra de linha buga o programa.
	
	
	return 0;
}

