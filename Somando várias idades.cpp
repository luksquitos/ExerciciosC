#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	//As vari�veis podiam ter sido declaradas em linhas diferentes
	//Tamb�m podem receber seu valor na frente
	//int idade = 20
	int idade, idadeMae, idadePai, idadeIrmao, somaIdades;
	printf("Digite sua idade\n");
	scanf("%i", &idade);
	printf("Digite a idade do pai\n");
	scanf("%i", &idadePai);
	printf("Digite a idade da m�e\n");
	scanf("%i", &idadeMae);
	printf("Digite a idade do irm�o\n");
	scanf("%i", &idadeIrmao);
	
	somaIdades = idade + idadeMae + idadePai + idadeIrmao;
	
	printf("A soma das idades foi de %i anos", somaIdades);
	
	// N�o � uma boa ideia fazer scanf("%i\n"), porque essa quebra de linha buga o programa.
	
	
	return 0;
}

