#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	
	//Localização
	setlocale(LC_ALL,"Portuguese");
	
	//Variáveis.
	char nome[300];
	float notaUm, notaDois, media, soma;
	
	//Dados do usuário.
	printf("Digite seu nome: ");
	scanf("%s", &nome);
	
	printf("Digite suas notas de: ");
	printf("\nQuímica: ");
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
	printf("\nQuímica: %.1f", notaUm);
	printf("\nArtes: %.1f", notaDois);
	printf("\nMédia: %.1f", media);
	if(media >= 9){
		printf("\nConceito correspondente: A");
		printf("\nSituação: Aprovado");
	}else{
		if(media >= 7.5 && media < 9){
			printf("\nConceito correspondente: B");
			printf("\nSituação: Aprovado");
		}else{
			if(media >= 6 && media < 7.5){
				printf("\nConceito correspondente: C");
				printf("\nSituação: Aprovado");
			}else{
				if(media >= 4 && media < 6){
					printf("\nConceito correspondente: D");
				printf("\nSituação: Reprovado.");
				}else{
					if(media < 4){
						printf("\nConceito correspondente: E");
				printf("\nSituação: Reprovado.");
					}
				}
			}
		}
	}
	
	
	
	return 0;
}
