#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	//Vari�veis.
	float primeiroNumero, segundoNumero, soma, sub, multi, divisao;
	
	//Dados do usu�rio
	printf("Digite um num�ro: ");
	scanf("%f", &primeiroNumero);
	
	printf("Digite outro n�mero: ");
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
	printf("\nSubtra��o: %.1f", sub);
	printf("\nMultiplicac�o: %.1f", multi);
	printf("\nDivis�o: %1.f", divisao);
	
	return 0;
	
	
}
