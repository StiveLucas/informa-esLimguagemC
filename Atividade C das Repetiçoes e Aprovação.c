#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	//Localização.
	setlocale(LC_ALL, "");
	
	//Variáveis.
	float nota, soma = 0, media;
	
	//Dados usuário.
	int i;
	for(i = 1; i <=3; i++){
		do{
		printf("Digite a %iº nota: ", i);
		scanf("%f", &nota);
	}while(nota < 0 || nota > 10);
	soma += nota;
}
   media = soma / 3;
   
   system("cls");
   //Resultados.
   printf("---Resultados---");
   printf("\nMédia: %.1f", media);
   if(media >= 7){
   	printf("\nAprovado");
   }else if(media >= 5 && media >=6.9){
   	printf("\nRecuperação.");
   }else{if(media < 5)
   printf("\nReprovado.");
   }
   

	return 0;
}
	
	
	
