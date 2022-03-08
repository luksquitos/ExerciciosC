//6. Faça uma função que receba como parâmetro um valor inteiro e positivo N, indicando 
//a quantidade de parcelas de uma soma S, calculada pela formula abaixo e retorne o 
//valor para o programa principal.

//Aluno: Lucas Martins Caetano



#include<stdio.h>
#include<locale.h>

main(){
	int n;
	float soma;
	int auxiliar = 1;
	setlocale(LC_ALL, "portuguese");
	
      
while(auxiliar) {
    printf("Digite um número qualquer ou 0 para terminar");
    scanf("%d", &auxiliar);
    printf("Usuário digitou %d \n",auxiliar);
    if (auxiliar) {
    	printf("Vamos somar até %d \n",auxiliar);
          soma=0;
          
    for (n=1;n<=auxiliar;n++){
        soma += (n*n+1.0)/(n +3.0);
}
    printf("O resultado da série é %f \n\n",soma);}
    	else {
            printf("entrada terminada pelo usuário \n");
        }
    };

}

