#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main(){
	//Localização.
	setlocale(LC_ALL, "");
	
	//Variáveis.
	char disciplinas[3][200];
	float notas[3][3];
	
	//Dados do usuário.
	int x;
	int y;
	
	printf("Digite três disciplinas e suas três notas.");
	
	for(x = 0; x < 3; x++){
		printf("\nDigite o nome da %iº disciplina: ", x + 1);
		scanf("%s", &disciplinas[x]);
	
	for(y = 0; y < 3; y++){
		printf("\nDigite a %iº nota: ", y + 1);
		scanf("%f", &notas[x][y]);
		fflush(stdin);
	
		if(notas[x][y] > 10 || notas[x][y] < 0){
			printf("Digite números acima de (0) e abaixo de (10).");
		}
	  }
	
	}
	return 0;	
}
