#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	//Localiza��o.
	setlocale(LC_ALL, "");
	
	//Vari�veis.
	float notas[4], media;
	int soma = 0, contador = 0; 
	
	//Dados do usu�rio.
	int i;
	
	for(i = 0; i < 4; i++){
		printf("Digite sua %i� nota: ", i + 1);
		scanf("%f", &notas[i]);
		
		contador += 1;
		soma += notas[i];
	}
	
	//Calculo.
	media = soma / contador;
	
	system("cls");
	//Resultados.
	printf("---Resultado---");
	
	for(i = 0; i < 4; i++){
		printf("\n%i� nota: %.1f", i + 1, notas[i]);
	}
		printf("\nM�dia: %.1f", media);
		
		if(media >= 7){
			printf("\nAprovado");
		}
	else if(media >= 5){
		printf("\nRecupera��o.");
	}
	else{
		printf("\nReprovado.");
	}
	
	
	return 0;
}
