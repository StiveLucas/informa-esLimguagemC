#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	//Vari�veis.
	char nome [200];
	int idade;
	float notaUm, notaDois, notaTres, notaQuatro, media;
	
	//Dados do usu�rio 
	printf("Digite seu nome: ");
	scanf("%s", &nome);
	
	printf("Digite sua idade: ");
	scanf("%i", &idade);
	
	printf("Digite a nota de:");
	printf("\nPortugu�s: ");
	scanf("%f", &notaUm);
	
	fflush(stdin);
	
	printf("Qu�mica: ");
	scanf("%f", &notaDois);
	
	fflush(stdin);
	
	printf("Artes: ");
	scanf("%f", &notaTres);
	
	fflush(stdin);

	printf("Biologia: ");
	scanf("%f", &notaQuatro);
	
	//Calculo.
	media = (notaUm + notaDois + notaTres + notaQuatro) /4;
	
	system("cls");
	//Resultado
	printf("---Resultado---");
	printf("\nNome: %s", nome);
	printf("\nIdade: %i", idade);
	printf("\n---Notas---");
	printf("\nPortugu�s: %.1f", notaUm);
	printf("\nQu�mica: %.1f", notaDois);
	printf("\nArtes: %.1f", notaTres);
	printf("\nBiologia: %.1f", notaQuatro);
	printf("\nM�dia: %.1f", media);
	
	return 0;
	
	
	
	
}
