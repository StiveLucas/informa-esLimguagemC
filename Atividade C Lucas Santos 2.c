#include <stdio.h>

int main(){
	//Declarando vari�veis
	char nome[200]; //Cadeia 
	char sexo = 'M' ; // Caracter
	int idade = 20 ; // Inteiro
	float peso = 58.400 ; //Real
	
	//Solicitando dados do usu�rio.
	printf("Digite seu nome: ");
	scanf("%s", &nome);
	
	fflush(stdin); //Limpa o cache de input.
	
	printf("Digite seu sexo - M ou F: ");
	scanf("%c",&idade);
	
	printf("Digite sua idade: ");
	scanf("%i",&idade);
	
	printf("Digite seu peso: ");
	scanf("%f", &peso);
	
	
	//Exibindo resultados.
	printf("\n---Resultados---/n") ; 
	printf ("\nNome: %s \n", nome) ; //%s -> string -> cadeia
	printf("Sexo: %c \n", sexo);// %c -> char -> carcter
	printf("Idade: %i \n", idade);// %i -> char -> inteiro
	printf("Peso: %f \n", peso); // %f -> float -> real
	
	return 0 ;
	
}
