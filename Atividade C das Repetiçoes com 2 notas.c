#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	//Localização.
	setlocale(LC_ALL, "");
	
	//Variáveis.
	float nota, media, soma = 0;
	
	//Dados do usário.
int i;
	for(i =1; i<=2; i++){
		do{
		printf("Digite a %iº nota: ", i);
		scanf("%f", &nota);
		}while(nota < 0 || nota > 10);	
		soma += nota;
	}
	
	//Calculo.
	media = soma / 2;
	
	system("cls");
	//Resultado.
	printf("---Resultado---");
	printf("\nMédia: %f", media);

	return 0;
}
