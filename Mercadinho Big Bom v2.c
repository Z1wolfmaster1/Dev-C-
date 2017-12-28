#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct produto{
	char nome[100];
	int cod, qua;
	float pre;
};

int main(){
	setlocale(LC_ALL,"");
	struct produto p[100];
	int i, i9, j=0;
	float x, t=0;
	char nt[100];
	
	while(1){
		system("cls");
		printf("Mercadinho Big Bom v2.0\n\n1. Cadastrar\n2. Efetuar venda\n3. Relatorio\n4. Sair\n\n");
		scanf("%f", &x);
		
		if(x==1){
			system("cls");
			printf("Quantidade de produtos a serem cadastrados\n\n=> ");
			scanf("%f", &x);
			
			for(i=j; i<x; i++, j++){
				system("cls");
				getchar();
			
				printf("Nome: ");
				scanf("%[^\n]s", &p[i].nome);
				
				printf("\nCodigo: ");
				scanf("%d", &p[i].cod);
				
				printf("\nPreço por unidade: ");
				scanf("%f", &p[i].pre);
				
				printf("\nQuantidade em estoque:");
				scanf("%d", &p[i].qua);
			}
			
			system("cls");
			printf("Cadastro concluido\n\n");
			system("pause");
			
		}
		
		else if(x==2){
			if(j>0){
				do{
					system("cls");
					printf("Total: R$%.2f\n\n1. Adicionar produto ao carrinho\n2. Finalizar\n3. Voltar\n\n=> ", t);
					scanf("%f", &x);
					
					if(x==1){
						system("cls");
						printf("1. Nome do produto\n2. Codigo do produto\n\n=> ");
						scanf("%f", &x);
						
						if(x==1){
							while(1){
								system("cls");
								printf("Digite o nome do produto: ");
								getchar();
								scanf("%[^\n]s", &nt);
						
								for(i=0; i<j; i++){
									if(strcmp(p[i].nome,nt)==0){
										break;
									}
							
									else{
									
									}
								}
							
								printf("Esse é o produto?\n\nNome: %s\nCodigo: %d\nPreço: %.2f\n\n1. Sim\n2. Não\n\n=> ", p[i].nome, p[i].cod, p[i].pre);
								scanf("%f", &x);
								
								if(x==1){
									printf("\nNº de unidades: ");
									scanf("%f", &x);
									
									t+=x*p[i].pre;
									p[i].qua-=x;
									break;
								}
								
							}
							
							
						}
						
						else if(x==2){
							while(i){
								system("cls");
								printf("Digite o codigo do produto: ");
								scanf("%f", &x);
						
								for(i=0; i<j; i++){
									if(x==p[i].cod){
										break;
									}
								}
							
								printf("\nEsse é o produto?\n\nNome: %s\nCodigo: %d\nPreço: %.2f\n\n1. Sim\n2. Não\n\n=> ", p[i].nome, p[i].cod, p[i].pre);
								scanf("%f", &x);
								
								if(x==1){
									printf("\nNº de unidades: ");
									scanf("%f", &x);
									
									t+=x*p[i].pre;
									p[i].qua-=x;
									break;
								}
							}
							
						}
					}
					
					else if(x==2){
						
					}
					
					else if(x==3){
						break;
					}
				}while(1);
			}
			
			else{
				printf("\nNENHUM PRODUTO CADASTRADO!\n\n");
				system("pause");
			}
		}
		else if(x==3){
			system("cls");
			
			if(j>0){
				printf("Lista de produtos\n\n");
				
				for(i=0; i<j; i++){
					printf("Produto Nº%d\n\nNome: %s\nCodigo: %d\nEstoque: %d\n\n", i+1, p[i].nome, p[i].cod, p[i].qua);
				}
				
				system("pause");
			}
			
			else{
				printf("\nNENHUM PRODUTO CADASTRADO!\n\n");
				system("pause");
			}
		}
		
		else if(x==4){
			printf("\nObrigado pela preferência. Volte sempre :)\n\n");
			system("pause");
			system("taskkill /IM consolepauser.exe");
			system("taskkill /IM mercadinho.exe");
			break;
		}
	}
}
