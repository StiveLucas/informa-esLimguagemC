#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	
	//Localiza��o
	setlocale(LC_ALL, "Portuguese");
	
	//Vari�veis.
	char nome[200];
	int idade;
	
	//Dados do usu�rio.
	printf("Digite seu nome: ");
	scanf("%s", &nome);
	
	printf("Digite sua idade: ");
	scanf("%i", &idade);
	
	system("cls");
	//Resultado.
	printf("---Resultado---");
	printf("\nNome: %s", nome);
	printf("\nIdade: %i", idade);
	if(idade >= 18 && idade <= 65){
		printf("\nVoc� � obrigado a votar");
	}else{
		printf("\nVoc� n�o � obrigado");
	}
	
	
	
}

