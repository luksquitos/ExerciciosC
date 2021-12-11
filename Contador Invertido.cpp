#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	int contador;
	//Para ser crescente, basta mudar o -- por ++
	for(contador = 10; contador >= 0; contador --) {
		printf("%i\n", contador);
	}
	printf("BUMMM!!!");
	
	return 0;
}
