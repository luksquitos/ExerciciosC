#include <stdio.h>
#include <locale.h>

//� necess�rio importar essa biblioteca Locale para que a gente possa utilizar acentos
int main()
{
	//E tem que colocar esse comando tamb�m
	setlocale(LC_ALL,"portuguese");
	
	int idade;
	printf("Digite sua idade\n");
	scanf("%i", &idade);
	printf("Sua idade � %i", idade);
	
	return 0;
}
