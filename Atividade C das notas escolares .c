#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	//Variáveis.
	char nome [200];
	int idade;
	float notaUm, notaDois, notaTres, notaQuatro, media;
	
	//Dados do usuário 
	printf("Digite seu nome: ");
	scanf("%s", &nome);
	
	printf("Digite sua idade: ");
	scanf("%i", &idade);
	
	printf("Digite a nota de:");
	printf("\nPortuguês: ");
	scanf("%f", &notaUm);
	
	fflush(stdin);
	
	printf("Química: ");
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
	printf("\nPortuguês: %.1f", notaUm);
	printf("\nQuímica: %.1f", notaDois);
	printf("\nArtes: %.1f", notaTres);
	printf("\nBiologia: %.1f", notaQuatro);
	printf("\nMédia: %.1f", media);
	
	return 0;
	
	
	
	
}
