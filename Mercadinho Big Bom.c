#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int i, j=0, c[1000], q[1000];
	float p[1000], x;
	char n[1000][100];
	
	while(1){
		system("cls");
		printf("Mercadinho Big Bom\n\n1. Casdastrar\n2. Efetuar venda\n3. Relatorio\n4. Sair\n\n=>");
		scanf("%f", &x);
		
		if(x==1){
			system("cls");
			printf("Quantidade de produtos a serem cadastrados\n\n=>");
			scanf("%d", &x);
			for(i=j; i<x; i++){
				system("cls");
				getchar();
				printf("Nome: ");
				scanf("%[^\n]s", &n[i]);
				printf("\nCodigo: ");
				scanf("%d", &c[i]);
				printf("\nPreço por unidade: ");
				scanf("%f", &p[i]);
				printf("\nQuantidade em estoque: ");
				scanf("%d", &q[i]);
			}
			
			system("cls");
			printf("Cadastro concluido");
		}	
	}
}
