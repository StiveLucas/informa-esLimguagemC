#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	//Localiza��o.
	setlocale(LC_ALL, "");
	
	//Vari�veis.
	int soma = 0, numeroPar = 0, numeroImpar = 0;
	
	//Dados do usu�rio.
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
    printf("\nQuantidade de n�mero pares: %i", numeroPar);
    printf("\nQuantidade de n�mero �mpares: %i", numeroImpar);
    
	
	
	return 0;
}
