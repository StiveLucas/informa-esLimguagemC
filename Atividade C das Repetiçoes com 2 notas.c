#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	//Localiza��o.
	setlocale(LC_ALL, "");
	
	//Vari�veis.
	float nota, media, soma = 0;
	
	//Dados do us�rio.
int i;
	for(i =1; i<=2; i++){
		do{
		printf("Digite a %i� nota: ", i);
		scanf("%f", &nota);
		}while(nota < 0 || nota > 10);	
		soma += nota;
	}
	
	//Calculo.
	media = soma / 2;
	
	system("cls");
	//Resultado.
	printf("---Resultado---");
	printf("\nM�dia: %f", media);

	return 0;
}
