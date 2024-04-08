#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	//Localização.
	setlocale(LC_ALL, "");
	
	//Variáveis.
	int numero, impar = 0, par = 0, soma = 0, contadorPar = 0, contadorImpar = 0, contadorNumero = 0;
	float mediaPar, somaDePares = 0, mediaGeral;
	
	//Dados de usuário.
	do{
do{
	printf("\nDigite números inteiros e positivos.");
	printf("\n===Digite (0) para finalizar o programa===");
	printf("\nDigite o número: ");
	scanf("%i", &numero);
	
	contadorNumero += 1;
	
	if(numero % 2 == 0){
		contadorPar += 1;
		somaDePares += numero;
		
	}else{
		contadorImpar += 1;
	}
	
	
  	soma += numero;
	
	if(numero < 0){
		printf("\nOpção inválida.");
	}
}while(numero < 0);
	
}while(numero > 0);

   //Calculo.
   mediaPar = somaDePares / contadorPar;
	mediaGeral = soma / contadorNumero;
	
	system("cls");
	//Resultado.
	printf("---Resultado---");
	printf("\nQuantidade de números pares: %i", contadorPar);
	printf("\nQuantidade de números impares: %i",contadorImpar);
	printf("\nMédia dos números pares: %.1f", mediaPar);
	printf("\nMédia geral: %.1f", mediaGeral);
	
	return 0;
}
