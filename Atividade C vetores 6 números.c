#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	//Localização.
	setlocale(LC_ALL, "");
	
	//Variáveis.
	int soma = 0, numeroPar = 0, numeroImpar = 0;
	
	//Dados do usuário.
	int vetor[6];
	int i;
	
	printf("Digite a quantidade de elementos do vetor.");
	for(i = 0; i < 6; i++){
		printf("\nElementos %i: ", i + 1, vetor[i]);
		scanf("%i", &vetor[i]);
		
		if(vetor[i] % 2 == 0){
			numeroPar ++;
		}else{
			numeroImpar++;
		}
	}
	
	system("cls");
	//Resultados.
	printf("---Resultados---");
	for(i = 0; i < 6; i++){
		printf("\nElemento %i: %i", i + 1, vetor[i]);
	}
    printf("\nQuantidade de número pares: %i", numeroPar);
    printf("\nQuantidade de número ímpares: %i", numeroImpar);
    
	
	
	return 0;
}
