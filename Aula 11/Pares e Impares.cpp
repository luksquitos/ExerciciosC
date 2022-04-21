#include<stdio.h>
#include<math.h>
#include<locale.h>

//Lucas Martins Caetano - 2120474

main()
{
	int ler[6], impares = 0, pares = 0;
	
	printf("Digite 6 valores\n");
	
	for(int i = 0; i < 6; i++){
		scanf("%i", &ler[i]);
		if(ler[i] % 2 == 0){
			printf("Par: %i\n", ler[i]);
			pares++;
		}else{
			printf("Impar: %i\n", ler[i]);
			impares++;
		}

	}
	printf("Quantidade pares: %i\nQuantidade Impares: %i", pares, impares);
}


