#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 5

int main(){
	//Localização.
	setlocale(LC_ALL, "");
	
	//Variáveis.
	int numero[TAM];
	int contadorPar = 0, contadorImpar = 0, contadorPositivo = 0, contadorNegativo = 0;
	int contadorGeral = 0, maiorNumero = INT_MAX, menorNumero = INT_MIN;
	int somaPar = 0, somaImpar = 0, somaGeral = 0;
	float mediaPar = 0, mediaImpar = 0, mediaGeral = 0;
	
	//Dados do usuário.
	int i = 0;
	
	printf("Digite 5 números.");
	
	for(i = 0; i < 5; i++){
		printf("\nDigite o %iº número: ", i + 1);
		scanf("%i", &numero[TAM]);
		
		contadorGeral++;
		somaGeral += numero[i];
		
		
	if (numero[i] % 2 == 0){
	   contadorPar++;
	   somaPar += numero[i];
	    }else{
	   contadorImpar++;
	   somaImpar += numero[i];
	   
}
	
	   if (numero[i] > 0){
	   	contadorPositivo++;
	   }else if (numero[i] < 0){
	   	contadorNegativo++;
	   }
	   
	   if (numero[i] > maiorNumero) {
	   		maiorNumero = numero[i];
	   } else if(numero[i] < menorNumero) {
	   		menorNumero = numero[i];
	   } 
	   
		}
		
		//Calculo.
		mediaPar = somaPar / contadorPar;
		mediaImpar = somaImpar / contadorImpar;
		mediaGeral = somaGeral / contadorGeral;
		
		system("cls");
		//Resultados
		printf("---Resultado---");
		printf("\nQuantidade de números:");
		printf("\nPares: %i", contadorPar);
		printf("\nÍmpares: %i", contadorImpar);
		printf("\nPositivos: %i", contadorPositivo);
		printf("\nNegativos: %i", contadorNegativo);
		printf("\nMaior número: %i", maiorNumero);
		printf("\nMenor número: %i", menorNumero);
		printf("\n");
		printf("\nMédia de números:");
		printf("\nPares: %.1f", mediaPar);
		printf("\nÍmpares: %.1f", mediaImpar);
		printf("\nTodos os números: %.1f", mediaGeral);
		
	
	
	
	    return 0;
	}
