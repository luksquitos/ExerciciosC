#include<stdio.h>
#include<math.h>
#include<locale.h>
#include<stdlib.h>


main()
{
	int var[] = {7, 11, 9, 3};
	int cont_mudancas = 0;
	int total = sizeof(var) / sizeof(int);
	int gaveta;
	
//	printf("%i", total);
	
	for (int i = 0; i <= total; i++){
		if(var[i] > var[i + 1] && i != total){			
			gaveta = var[i];
			var[i] = var[i + 1];
			var[i + 1] = gaveta;
			cont_mudancas++;
		}
		if(i == total){
			if(cont_mudancas > 0){
				i = 0;
				cont_mudancas = 0;
			}
		}
	}
	for(int i=0; i < total; i++){
		printf("%i ", var[i]);
	}
}

