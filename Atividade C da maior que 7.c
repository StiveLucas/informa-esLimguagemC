#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){

    setlocale(LC_ALL, "Portuguese");
    
    //Vari�veis.
    char nome[200];
    int idade;
    float notaUm, notaDois, notaTres, media;
    
    //Dados usu�rio.
    printf("Digite seu nome: ");
    scanf("%s",&nome);
    
    printf("Digite sua idade: ");
    scanf("%i", &idade);
    
    printf("Digite sua nota de:");
    printf("\nPortugu�s: ");
    scanf("%f", &notaUm);
	printf("Artes: ");
	scanf("%f", &notaDois);
	printf("Qu�mica: ");
	scanf("%f", &notaTres);
	
	//calculo.
	media = (notaUm + notaDois + notaTres)/ 3;
	
    system("cls");
    
    //Resultado.
    printf("---Resultado---");
    printf("\nNome: %s", nome);
    printf("\nIdade: %i", idade);
    printf("\nNota de:");
    printf("\nPortugu�s: %.1f", notaUm);
    printf("\nArtes: %.1f", notaDois);
    printf("\nQu�mica: %.1f", notaTres);
    if(media >= 7){
    	printf("\nM�dia: %.1f", media);
    	printf("\nAprovado.");

	}else{
		printf("\nM�dia: %.1f", media);
		printf("\nReprovado.");
	}
    
    return 0;
    	
}
