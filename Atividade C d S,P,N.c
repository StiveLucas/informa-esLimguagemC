#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

int main(){
	//Localização.
	setlocale(LC_ALL, "");
	
	//Variáveis.
	float nota, media, soma = 0;
	char desejo;
	
	//Dados do usuário.
	
	int contador = 0;
do{
	contador = contador +1;
	
	system("cls");
	
	printf("Digite sua %iº nota: ", contador);
	scanf("%f", &nota);
	
	fflush(stdin);
do{
	
	printf("\nDigite:");
	printf("\n 'S' para inserir uma nota");
	printf("\n 'P' para ver quantas notas foram inseridas.");
	printf("\n 'N' Calcular a média aritmética das notas inseridas.");
	printf("\nAperte 'Enter' para sair");
	printf("\nDigite: ");
	scanf("%c", &desejo);
	
	fflush(stdin);
	
	desejo = toupper(desejo);
	
	soma += nota;
	media = soma / contador;

if(desejo == 'P'){
	
	printf("Quantas notas foram inseridas: ");
	printf("%d", contador);
}else if(desejo == 'N'){
	printf("\nMédia: %.1f\n", media);
}
}while(desejo == 'P');
}while(desejo == 'S');	
	
	return 0;
}
