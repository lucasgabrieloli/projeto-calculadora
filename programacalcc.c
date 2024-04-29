#include<stdio.h>
#include<stdlib.h>

void main(){
	
	int numero1, numero2, resultado, operacao;
	
	
		printf("\nDigite 1 para somar, 2 para subtrair, 3 para dividir e 4 para multiplicar!");
			scanf("%d", &operacao);
			
	if (operacao == 0){
				
		printf("\nErro, operacao indisponivel!\n");
	}
			
	if (operacao > 4){
				
		printf("\nErro, operacao indisponivel!\n");
	}
	
		printf("\nDigite o primeiro valor:");
			scanf("%d", &numero1);
	
		printf("\nDigite o segundo valor:");
			scanf("%d", &numero2);
	
	if (operacao == 1){
		
		resultado = numero1+numero2;
		
		printf("\n%d + %d = %d\n\n", numero1, numero2, resultado);
	}
	
	if (operacao == 2){
		
		resultado = numero1-numero2;
		
		printf("\n%d - %d = %d\n\n", numero1, numero2, resultado);
	}
	
	if (operacao == 3){
		
		resultado = numero1/numero2;
		
		if(numero2 == 0){
			
			printf("Erro!");
			
	}
		
		printf("\n%d / %d = %d\n\n", numero1, numero2, resultado);
	}
	
	if (operacao == 4){
		
		resultado = numero1*numero2;
		
		printf("\n%d X %d = %d\n\n", numero1, numero2, resultado);
		
	}

	system("Pause");
	
	}
