//4. Faça uma função que receba como parâmetro a hora de inicio e a hora de término de
//um jogo, ambas subdivididas em dois valores distintos: hora e minutos. A função deverá
//retornar a duração expressa em minutos, considerando que o tempo máximo de
//duração de um jogo é de 24 horas e que ele pode começar em um dia e terminar no
//outro.
//

//Observação !!
//A entrada de dados deve ser feita dessa forma
//12:40 

//Aluno: Lucas Martins Caetano.

#include <stdio.h>
#include <locale.h>



int hora(int hstart, int minstart, int hend, int minend)
{
	
	if (hstart <= 23 && hend <= 23 && minstart < 60 && minend < 60){
		int minHoras, quebrados, somatorio;
		if (hstart >= hend){
			int minHoras;
			minHoras = (hstart - hend) * 60;  
			if (minstart >= minend){
				quebrados = minstart - minend;
				
			}else{
				quebrados = minend - minstart;
			
			}
			somatorio = minHoras + quebrados;
			printf("\nO jogo durou %i minutos", somatorio);

		}else{
			minHoras = (hend - hstart) * 60;  
			if (minstart >= minend){
				quebrados = minstart - minend;
				
			}else{
				quebrados = minend - minstart;
			
			}
			
			somatorio = minHoras + quebrados;
			printf("\O jogo durou %i minutos", somatorio);

		}
	}else{
		return 0;
	}
	
}

main()
{
	setlocale(LC_ALL, "portuguese");
	
	
	int hi, mi, hf, mf, funcao;
	printf("Digite o horário de inicio de jogo\n");
	scanf("%i%*c%i", &hi, &mi);
	printf("Digite o horário de término do jogo\n");
	scanf("%i%*c%i", &hf, &mf);
	
	funcao = hora(hi, mi, hf, mf);
	
//	printf("%i", funcao);
	
	if (funcao == 0){
		printf("\nValores inválidos. ");
	}
	
}
