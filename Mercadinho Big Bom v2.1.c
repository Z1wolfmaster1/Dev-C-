#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct produto{
	char nome[100];
	int cod, qua;
	float pre;
};

void est(int a, int* d, int x);

int main(){
	setlocale(LC_ALL,"");
	struct produto p[100];
	int i, i9=0, j=0, back[100][2], x;
	float t=0;
	char nt[100];
	
	while(1){
		system("cls");
		printf("Mercadinho Big Bom v2.1\n\n1. Cadastrar\n2. Efetuar venda\n3. Relatorio\n4. Sair\n\n=> ");
		scanf("%d", &x);
		
		if(x==1){
			system("cls");
			printf("Quantidade de produtos a serem cadastrados\n\n=> ");
			scanf("%d", &x);
			
			for(i=0; i<x; i++, j++){
				system("cls");
				getchar();
			
				printf("Nome: ");
				scanf("%[^\n]s", &p[j].nome);
				
				printf("\nCodigo: ");
				scanf("%d", &p[j].cod);
				
				printf("\nPreço por unidade: ");
				scanf("%f", &p[j].pre);
				
				printf("\nQuantidade em estoque: ");
				scanf("%d", &p[j].qua);
			}
			
			system("cls");
			printf("Cadastro concluido\n\n");
			system("pause");
			
		}
		
		else if(x==2){
			if(j>0){
				do{
					system("cls");
					printf("Total: R$%.2f\n\n1. Adicionar produto ao carrinho\n2. Finalizar compra\n3. Cancelar\n\n=> ", t);
					scanf("%d", &x);
					
					if(x==1){
						system("cls");
						printf("1. Nome do produto\n2. Codigo do produto\n\n=> ");
						scanf("%d", &x);
						
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
								scanf("%d", &x);
								
								if(x==1){
									printf("\nNº de unidades: ");
									scanf("%d", &x);
									
									t+=x*p[i].pre;
									back[i9][0]=i;
									back[i9][1]=p[i].qua;
									i9++;
									est(p[i].qua, &p[i].qua, x);
									break;
								}
								
							}
							
							
						}
						
						else if(x==2){
							while(i){
								system("cls");
								printf("Digite o codigo do produto: ");
								scanf("%d", &x);
						
								for(i=0; i<j; i++){
									if(x==p[i].cod){
										break;
									}
								}
								
								system("cls");
								printf("\nEsse é o produto?\n\nNome: %s\nCodigo: %d\nPreço: %.2f\n\n1. Sim\n2. Não\n\n=> ", p[i].nome, p[i].cod, p[i].pre);
								scanf("%d", &x);
								
								if(x==1){
									printf("\nNº de unidades: ");
									scanf("%d", &x);
									
									t+=x*p[i].pre;
									back[i9][0]=i;
									back[i9][1]=p[i].qua;
									i9++;
									est(p[i].qua, &p[i].qua, x);
									break;
								}
							}
							
						}
					}
					
					else if(x==2){
						printf("Compra realizada com sucesso!\n\n%d\n\n", back[0][1]);
						system("pause");
						i9=0;
						break;
					}
					
					else if(x==3){
						for(i=0; i<i9; i++){
							p[back[i][0]].qua=back[i][1];
						}
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
		
		else{
			printf("\nComando inexistente!\n\n");
			system("pause");
		}
	}
}

void est(int a, int* d, int x){
	*d=a-x;
}
