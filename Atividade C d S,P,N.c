#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

int main(){
	//Localiza��o.
	setlocale(LC_ALL, "");
	
	//Vari�veis.
	float nota, media, soma = 0;
	char desejo;
	
	//Dados do usu�rio.
	
	int contador = 0;
do{
	contador = contador +1;
	
	system("cls");
	
	printf("Digite sua %i� nota: ", contador);
	scanf("%f", &nota);
	
	fflush(stdin);
do{
	
	printf("\nDigite:");
	printf("\n 'S' para inserir uma nota");
	printf("\n 'P' para ver quantas notas foram inseridas.");
	printf("\n 'N' Calcular a m�dia aritm�tica das notas inseridas.");
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
	printf("\nM�dia: %.1f\n", media);
}
}while(desejo == 'P');
}while(desejo == 'S');	
	
	return 0;
}
