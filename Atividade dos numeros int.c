#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	//Localiza��o.
	setlocale(LC_ALL, "");
	
	//Vari�veis.
	int numero, impar = 0, par = 0, soma = 0, contadorPar = 0, contadorImpar = 0, contadorNumero = 0;
	float mediaPar, somaDePares = 0, mediaGeral;
	
	//Dados de usu�rio.
	do{
do{
	printf("\nDigite n�meros inteiros e positivos.");
	printf("\n===Digite (0) para finalizar o programa===");
	printf("\nDigite o n�mero: ");
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
		printf("\nOp��o inv�lida.");
	}
}while(numero < 0);
	
}while(numero > 0);

   //Calculo.
   mediaPar = somaDePares / contadorPar;
	mediaGeral = soma / contadorNumero;
	
	system("cls");
	//Resultado.
	printf("---Resultado---");
	printf("\nQuantidade de n�meros pares: %i", contadorPar);
	printf("\nQuantidade de n�meros impares: %i",contadorImpar);
	printf("\nM�dia dos n�meros pares: %.1f", mediaPar);
	printf("\nM�dia geral: %.1f", mediaGeral);
	
	return 0;
}
