#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){

    setlocale(LC_ALL, "Portuguese");
    
    //Variáveis.
    char nome[200];
    int idade;
    float notaUm, notaDois, notaTres, media;
    
    //Dados usuário.
    printf("Digite seu nome: ");
    scanf("%s",&nome);
    
    printf("Digite sua idade: ");
    scanf("%i", &idade);
    
    printf("Digite sua nota de:");
    printf("\nPortuguês: ");
    scanf("%f", &notaUm);
	printf("Artes: ");
	scanf("%f", &notaDois);
	printf("Química: ");
	scanf("%f", &notaTres);
	
	//calculo.
	media = (notaUm + notaDois + notaTres)/ 3;
	
    system("cls");
    
    //Resultado.
    printf("---Resultado---");
    printf("\nNome: %s", nome);
    printf("\nIdade: %i", idade);
    printf("\nNota de:");
    printf("\nPortuguês: %.1f", notaUm);
    printf("\nArtes: %.1f", notaDois);
    printf("\nQuímica: %.1f", notaTres);
    if(media >= 7){
    	printf("\nMédia: %.1f", media);
    	printf("\nAprovado.");

	}else{
		printf("\nMédia: %.1f", media);
		printf("\nReprovado.");
	}
    
    return 0;
    	
}
