#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main(){
	//Localiza��o.
	setlocale(LC_ALL, "");
	
	//Vari�veis.
	char disciplinas[3][200];
	float notas[3][3];
	
	//Dados do usu�rio.
	int x;
	int y;
	
	printf("Digite tr�s disciplinas e suas tr�s notas.");
	
	for(x = 0; x < 3; x++){
		printf("\nDigite o nome da %i� disciplina: ", x + 1);
		scanf("%s", &disciplinas[x]);
	
	for(y = 0; y < 3; y++){
		printf("\nDigite a %i� nota: ", y + 1);
		scanf("%f", &notas[x][y]);
		fflush(stdin);
	
		if(notas[x][y] > 10 || notas[x][y] < 0){
			printf("Digite n�meros acima de (0) e abaixo de (10).");
		}
	  }
	
	}
	return 0;	
}
