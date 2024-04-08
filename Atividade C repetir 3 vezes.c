#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

int main(){
	//Localização.
	setlocale(LC_ALL, "");
	
	//Variáveis.
	char login [200] = "stive", senha[200] = "123", loginUsuario [200], senhaUsuario[200];
	int i =0;
	
	//Dados de usuário.
	for(i = 0; i <= 3; i++){
		
		printf("\nDigite seu login: ");
	scanf("%s", &loginUsuario);
	
	printf("\nDigite sua senha: ");
	scanf("%s", &senhaUsuario);
	
	if(strcmp(login, loginUsuario) == 0 && strcmp(senha, senhaUsuario) == 0){
		printf("\nBem-vindo, stive.");
		break;
		
	}else{
		printf("\nAcesso negado.");
	   }
	}
	
	
	
	
	
	
	return 0;
}
