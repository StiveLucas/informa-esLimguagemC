#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	//Localiza��o.
	setlocale(LC_ALL, "");
	
	//Vari�veis.
	float nota, soma = 0, media;
	
	//Dados usu�rio.
	int i;
	for(i = 1; i <=3; i++){
		do{
		printf("Digite a %i� nota: ", i);
		scanf("%f", &nota);
	}while(nota < 0 || nota > 10);
	soma += nota;
}
   media = soma / 3;
   
   system("cls");
   //Resultados.
   printf("---Resultados---");
   printf("\nM�dia: %.1f", media);
   if(media >= 7){
   	printf("\nAprovado");
   }else if(media >= 5 && media >=6.9){
   	printf("\nRecupera��o.");
   }else{if(media < 5)
   printf("\nReprovado.");
   }
   

	return 0;
}
	
	
	
