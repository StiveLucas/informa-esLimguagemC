#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	
	//Localiza��o
	setlocale(LC_ALL,"Portuguese");
	
	//Vari�veis.
	char nome[300];
	float notaUm, notaDois, media, soma;
	
	//Dados do usu�rio.
	printf("Digite seu nome: ");
	scanf("%s", &nome);
	
	printf("Digite suas notas de: ");
	printf("\nQu�mica: ");
	scanf("%f", &notaUm);
	printf("Artes: ");
	scanf("%f", &notaDois);
	
	//Calculo.
	soma = notaUm + notaDois;
	media = soma / 2;
	
	system("cls");
	//Resultado.
	printf("---Resultado---");
	printf("\nNome: %s", nome);
	printf("\n===Notas===:");
	printf("\nQu�mica: %.1f", notaUm);
	printf("\nArtes: %.1f", notaDois);
	printf("\nM�dia: %.1f", media);
	if(media >= 9){
		printf("\nConceito correspondente: A");
		printf("\nSitua��o: Aprovado");
	}else{
		if(media >= 7.5 && media < 9){
			printf("\nConceito correspondente: B");
			printf("\nSitua��o: Aprovado");
		}else{
			if(media >= 6 && media < 7.5){
				printf("\nConceito correspondente: C");
				printf("\nSitua��o: Aprovado");
			}else{
				if(media >= 4 && media < 6){
					printf("\nConceito correspondente: D");
				printf("\nSitua��o: Reprovado.");
				}else{
					if(media < 4){
						printf("\nConceito correspondente: E");
				printf("\nSitua��o: Reprovado.");
					}
				}
			}
		}
	}
	
	
	
	return 0;
}
