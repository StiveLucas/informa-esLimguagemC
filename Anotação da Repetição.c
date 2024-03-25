#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "");
	
	//Este comando serve para repetição
	int i;
	for (i = 1; i <= 10; i++){
		printf("%d\n",i);
	}
	
	system("cls");
	
	printf("\nTabuada de multiplicação do número 2 \n");
	for (i = 1; i <= 10; i++){
		printf("%d x %d = %d \n", 2, i, i*2);
	}
	
	printf("\nTabuada de multiplicação de 3\n");
	for (i = 1; i <= 10; i++){
		printf("%d x %d = %d \n", 3, i, i* 3);
	}
	
	return 0;
}
