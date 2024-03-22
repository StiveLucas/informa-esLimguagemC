#include <string.h>
#include <stdio.h>
#include <locale.h>


int main(){
	
	//Localização
	setlocale(LC_ALL, "Portuguese");
	
	//Variáveis
	float precoDaMaca, precoDaMacaDoze;
	int quantidadeMacas;
	
   //Preços da macãs.
	printf("===Tabela de preços===");
	printf("\nProduto" "\tPreços");
	printf("\nMacã" "\tR$1,30");
	printf("\nSe compar acima de 11 macãs elas custaram R$1,00");
	
	//Dados de usuário.
	printf("\nDigite quantas maçãs deseja: ");
	scanf("%i", &quantidadeMacas);
	
	//Calculo.
	precoDaMaca = 1.30;
	precoDaMacaDoze = 1.00;
	
	system("cls");
	//Resultados
	printf("---Resultados---");
	if(quantidadeMacas >=12){
		printf("\nQuantidade de maçãs: %i", quantidadeMacas);
		printf("\nPreço: R$%.2f", precoDaMacaDoze * quantidadeMacas);
	}else{
		printf("\nQuantidade de maçãs: %i", quantidadeMacas);
		printf("\nPreço: R$%.2f", (precoDaMaca * quantidadeMacas));
	}
	
	
return 0;	
}
