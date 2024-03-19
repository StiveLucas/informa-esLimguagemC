#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	
	//Localização
	setlocale(LC_ALL, "Portuguese");
	
	//Variáveis.
	char nome[200];
	int idade;
	
	//Dados do usuário.
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
		printf("\nVocê é obrigado a votar");
	}else{
		printf("\nVocê não é obrigado");
	}
	
	
	
}

