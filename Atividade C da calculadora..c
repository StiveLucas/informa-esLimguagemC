#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	//Variáveis.
	float primeiroNumero, segundoNumero, soma, sub, multi, divisao;
	
	//Dados do usuário
	printf("Digite um numéro: ");
	scanf("%f", &primeiroNumero);
	
	printf("Digite outro número: ");
	scanf("%f", &segundoNumero);
	
	//calculos.
	soma = primeiroNumero + segundoNumero;
	sub = primeiroNumero - segundoNumero;
	multi = primeiroNumero * segundoNumero;
	divisao = primeiroNumero / segundoNumero;
	
	system("cls");
	//Resultados
	printf ("---Resultados---");
	printf("\nSoma: %.1f", soma);
	printf("\nSubtração: %.1f", sub);
	printf("\nMultiplicacão: %.1f", multi);
	printf("\nDivisão: %1.f", divisao);
	
	return 0;
	
	
}
