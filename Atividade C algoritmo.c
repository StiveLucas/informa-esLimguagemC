#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	
	//Localiza��o.
setlocale(LC_ALL, "");

    //Vari�veis.
    int numero;
	
	system("cls");
	//Resultados.
	printf("---Resultado---\n");
	int i;
for (i = 1; i <= 20; i++){
	if(i % 2 - 1 ==0){
		printf("%d \n", i);
	}
}
	return 0;
}
