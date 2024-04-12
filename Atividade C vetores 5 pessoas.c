#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	//Localização.
	setlocale(LC_ALL, "");
	
	//Variáveis.

	char vetorNome[5][200];
	int vetorIdade[5];
	
		//Dados do usuário
	int i;
	
	for(i = 0; i < 5; i++){
		printf("Digite o nome %iº pessoa: ", i + 1, vetorNome[i]);
		scanf("%s", &vetorNome[i]);
		
		printf("Digite a idade: ", vetorIdade[i]);
		scanf("%i", &vetorIdade[i]);
	}
	
	system("cls");
	//Resultados.
	printf("---Resultados---");
	
	for(i = 0; i < 5; i++){
		printf("\nNome da %i° pessoa: %s", i + 1, vetorNome[i]);
		printf("\nIdade dessa pessoa: %i", vetorIdade[i]);
	}
	
	
	return 0;
}
