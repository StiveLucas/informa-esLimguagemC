#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	//Localiza��o.
	setlocale(LC_ALL, "");
	 
	 //Vari�veis.
	 char aluno[4][200];
	 float nota[4] [3], mediaDeCada[4];
	 int soma = 0, contador = 0;
	 
	 //Dados do usu�rio.
	 int x = 0;
	 int y = 0;
	 
	 printf("Digite o nome de 4 alunos e 3 notas pra cada.");
	 
	 for(x = 0; x < 4; x++){
	 	printf("\nDigite o nome do %i� aluno: ", x + 1);
	 	scanf("%s", &aluno[x]);
	 	
	 	for(y = 0; y < 3; y++){
	 		printf("Digite a %i� nota: ", y + 1);
	 		scanf("%f", &nota[x][y]);
	 		
	 		soma += nota[x][y];
	 		contador += 1;
		 }
	 
	 //Calculo.
	 mediaDeCada[x] = soma / contador;
	 soma = 0;
}
	 
	 //Resultado.
	 for(x = 0; x < 4; x++){
	 	printf("\nNome do %i� aluno: %s", x + 1, aluno[x]);
	 	for(y = 0; y < 3; y++){
	 		printf("\n%i� nota: %.1f", y + 1, nota[x][y]);
		 }
		 printf("\nM�dia do aluno: %.1f", mediaDeCada);
	 }

	
	
	
	
	return 0;
}
