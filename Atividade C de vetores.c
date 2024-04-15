#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 5

int main(){
	//Localização.
	setlocale(LC_ALL, "");
	
	//Variáveis.
	int numero[TAM], contadorPar = 0, contadorImpar = 0, contadorPositivo = 0;
	int contadorNegativo = 0, contador = 0;
	
	//Dados do usuário.
	printf("Digite APENAS (5) números.");
	
	int i = 0;

	for(i = 0; i < 5; i++){
		printf("\n");
		printf("Digite o %iº número: ", i + 1);
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
	printf("\nQuantidade de números:");
	printf("\nPares: %i", contadorPar);
	printf("\nÍmpares: %i", contadorImpar);
	printf("\nPositivos: %i", contadorPositivo);
	printf("\nNegativos: %i", contadorNegativo);
	printf("\nInseridos: %i", contador);
	
	return 0;
}
