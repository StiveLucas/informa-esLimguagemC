#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	//Localiza��o.
	setlocale(LC_ALL, "");
	
	//Vari�veis.
	char nome[200];
	int numero;
	
	//Dados do usu�rio.
	printf("Digite seu nome: ");
	scanf("%s", &nome);
	
	printf("Digite o n�mero: ");
	scanf("%i", &numero);
	
	system("cls");
	//Resultado.
	printf("---Resultado---\n");
	int i;
for (i = 1; i <= 10; i++){
	printf("%d x %d = %d \n", numero, i, i* numero ) ;
}
	
	return 0;
}
