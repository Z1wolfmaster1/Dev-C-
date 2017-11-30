#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	int i, i9, j=0, c[1000], q[1000];
	float p[1000], x, t=0;
	char n[1000][100], nt[100];
	
	while(1){
		system("cls");
		printf("Mercadinho Big Bom\n\n1. Casdastrar\n2. Efetuar venda\n3. Relatorio\n4. Sair\n\n=> ");
		scanf("%f", &x);
		
		if(x==1){
			system("cls");
			printf("Quantidade de produtos a serem cadastrados\n\n=> ");
			scanf("%f", &x);
			for(i=j; i<x; i++, j++){
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
		
		else if(x==2){
			if(j>0){
				do{
					system("cls");
					printf("Total: R$%.2f\n\n1. Adicionar produto ao carrinho\n2. Finalizar\n3. Voltar\n\n=>", t);
					scanf("%f", &x);
					if(x==1){
						system("cls");
						printf("1. Nome do produto\n2. Número de cadastro\n\n=> ");
						scanf("%f", &x);
			
						if(x==1){
							system("cls");
							printf("Digite o nome do produto: ");
							getchar();
							scanf("%[^\n]s", &nt);
				
							for(i=0; i<j; i++){
								if(strcmp(nt,n[i])==0){
									break;
								}
						
								else{
									for(i9=0; ; i9++){
							
									}
								}
							}
					
							system("cls");
							printf("Produto: %s\nCodigo: %d\nEstoque: %d\nPreço: R$%.2f\n\nQuantas unidades: ", n[i], c[i], q[i], p[i]);
							scanf("%f", &x);
							
							t+=x*p[i];
							q[i]-=x;
						}
			
						else if(x==2){
				
						}
			
						else{
				
						}
					}
				}while(x!=3);
			}
			
			else{
				printf("\nNENHUM PRODUTO CADASTRADO!\n\n");
				system("pause");
			}
		}
		else if(x==3){
			system("cls");
			printf("Lista de produtos\n\n");
			for(i=0; i<j; i++){
				printf("Produto Nº%d\n\nNome: %s\nEstoque: %d\n\n", i+1, n[i], q[i]);
			}
			system("pause");
		}
		else if(x==4){
			printf("\nObrigado pela preferência, Volte sempre.\n\n");
			system("pause");
			system("taskkill /IM consolepauser.exe");
			system("taskkill /IM Mercadinho Big Bom.exe");
			break;
		}	
	}
}
