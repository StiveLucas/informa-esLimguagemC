#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	
	//Localização.
setlocale(LC_ALL, "");

    //Variáveis.
    int numero;
	
	system("cls");
	//Resultados.
	printf("---Resultado---");
	int i;
for (i = 100; i <= 120; i++){
	if(i % 2 ==0){
		printf("%d \n", i);
	}
}
	return 0;
}
