#include <string.h>
#include <stdio.h>
#include <locale.h>


int main(){
	
	//Localiza��o
	setlocale(LC_ALL, "Portuguese");
	
	//Vari�veis
	float precoDaMaca, precoDaMacaDoze;
	int quantidadeMacas;
	
   //Pre�os da mac�s.
	printf("===Tabela de pre�os===");
	printf("\nProduto" "\tPre�os");
	printf("\nMac�" "\tR$1,30");
	printf("\nSe compar acima de 11 mac�s elas custaram R$1,00");
	
	//Dados de usu�rio.
	printf("\nDigite quantas ma��s deseja: ");
	scanf("%i", &quantidadeMacas);
	
	//Calculo.
	precoDaMaca = 1.30;
	precoDaMacaDoze = 1.00;
	
	system("cls");
	//Resultados
	printf("---Resultados---");
	if(quantidadeMacas >=12){
		printf("\nQuantidade de ma��s: %i", quantidadeMacas);
		printf("\nPre�o: R$%.2f", precoDaMacaDoze * quantidadeMacas);
	}else{
		printf("\nQuantidade de ma��s: %i", quantidadeMacas);
		printf("\nPre�o: R$%.2f", (precoDaMaca * quantidadeMacas));
	}
	
	
return 0;	
}
