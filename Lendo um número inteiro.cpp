#include <stdio.h>
#include <locale.h>

//É necessário importar essa biblioteca Locale para que a gente possa utilizar acentos
int main()
{
	//E tem que colocar esse comando também
	setlocale(LC_ALL,"portuguese");
	
	int idade;
	printf("Digite sua idade\n");
	scanf("%i", &idade);
	printf("Sua idade é %i", idade);
	
	return 0;
}
