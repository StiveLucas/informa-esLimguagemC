#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	//Localização.
	setlocale(LC_ALL, "");
	
	//Variáveis.
	float notas[4], media;
	int soma = 0, contador = 0; 
	
	//Dados do usuário.
	int i;
	
	for(i = 0; i < 4; i++){
		printf("Digite sua %iº nota: ", i + 1);
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
		printf("\n%iº nota: %.1f", i + 1, notas[i]);
	}
		printf("\nMédia: %.1f", media);
		
		if(media >= 7){
			printf("\nAprovado");
		}
	else if(media >= 5){
		printf("\nRecuperação.");
	}
	else{
		printf("\nReprovado.");
	}
	
	
	return 0;
}
