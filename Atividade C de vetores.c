#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 5

int main(){
	//Localiza��o.
	setlocale(LC_ALL, "");
	
	//Vari�veis.
	int numero[TAM], contadorPar = 0, contadorImpar = 0, contadorPositivo = 0;
	int contadorNegativo = 0, contador = 0;
	
	//Dados do usu�rio.
	printf("Digite APENAS (5) n�meros.");
	
	int i = 0;

	for(i = 0; i < 5; i++){
		printf("\n");
		printf("Digite o %i� n�mero: ", i + 1);
		scanf("%i", &numero[i]);
		
		contador++;
		
		if(numero[i] % 2 == 0){
			contadorPar++;
		}else{
			contadorImpar++;
		}
		
		if(numero[i] > 0){
			contadorPositivo++;
		}else{
			contadorNegativo++;
		}
	}
	
	system("cls");
	//Resultado.
	printf("---Resultado---");
	printf("\nQuantidade de n�meros:");
	printf("\nPares: %i", contadorPar);
	printf("\n�mpares: %i", contadorImpar);
	printf("\nPositivos: %i", contadorPositivo);
	printf("\nNegativos: %i", contadorNegativo);
	printf("\nInseridos: %i", contador);
	
	return 0;
}
