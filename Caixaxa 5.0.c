#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int saque(float x, float y);
int deposito(float x, float y);

int main(){
	setlocale(LC_ALL,"");
	int i=0, j=0, j2=0, ve=0, n[10000];
	float x=0, s[10000], ch[10000];
	char no[10000][100], b[100];
	 
	for(i=0; i<10000; i++)
	ch[i]=500;
	 
	do{
		system("cls");
		printf("1. Cadastro\n2. Saque\n3. Dep�sito\n4. Transfer�ncia\n5. Busca de clientes\n6. Sair\n\n=>");
	 	scanf("%f", &x);
	 	
	    if(x==1){
	 		system("cls");
	 	 	printf("Quantidade de contas a serem cadastradas\n\n=>");
	 		scanf("%d", &j);
	 		system("cls");
	 		
	 		for(i=j2; i<j+j2; i++, j2=i-1){
			 	getchar();
				printf("Conta %d\n\nNome do cliente: ", i+1);
				scanf("%[^\n]s", no[i]);
				printf("\nN�mero da conta: ");
				scanf("%d", &n[i]);
				printf("\nSaldo: ");
				scanf("%f", &s[i]);
				 
				if(i==j-1){
					printf("\nCadasto Concluido\n\n");
					system("pause");
				 	system("cls");
					break;
				}
				system("cls");
			 }
			 
			 j2+=j;
		}
	 	
		else if(x==2){
			if(j2>0){
				for(i=0; i<j2; i++){
					if(i==0){
						system("cls");
						printf("Digite o n�mero da sua conta\n\n=>");
						scanf("%d", &ve);
					}
	 			
					if(n[i]==ve)
					break;
				
					else if(i==j2-1){
						printf("\nConta n�o encontrada\n\n");
						i=-1;
						system("pause");
					}
				}
				
	 			system("cls");
	 			printf("Cliente:%s\nSaldo: %.2f\n\nTamanho do saque:\n\n=>R$", no[i], s[i]);
	 		
				scanf("%f", &x);
			
				s[i]=saque(s[i],x);
			
				system("pause");
				system("cls");
				}
			
				else{
					system("cls");
					printf("NENHUMA CONTA CADASTRADA!\n\n");
					system("pause");
					system("cls");
				}
		}
		 
		else if(x==3){
			if(j2>0){
				for(i=0; i<j2; i++){
					if(i==0){
						system("cls");
						printf("Digite o n�mero da sua conta\n\n=>");
						scanf("%d", &ve);
					}
	 			
					if(n[i]==ve)
					break;
				
					else if(i==j2-1){
						printf("\nConta n�o encontrada\n\n");
						i=-1;
						system("pause");
					}
				}
			
		 	 	system("cls");
	 		 	printf("Cliente:%s\nSaldo: %.2f\n\nTamanho do dep�sito:\n\n=>R$", no[i], s[i]);
	 		
			 	scanf("%f", &x);
			
			 	s[i]=deposito(s[i],x);
			
			 	system("pause");
			 	system("cls");
		    }
			
			else{
				system("cls");
				printf("NENHUMA CONTA CADASTRADA!\n\n");
				system("pause");
				system("cls");
			}
		}
		 
		else if(x==4){
			if(j2>0){
				for(i=0; i<j2; i++){
					if(i==0){
						system("cls");
						printf("Digite o n�mero da sua conta\n\n=>");
						scanf("%d", &ve);
					}
	 			
					if(n[i]==ve)
					break;
				
					else if(i==j2-1){
						printf("\nConta n�o encontrada\n\n");
						i=-1;
						system("pause");
					}
				}
		
		 		system("cls");
		 		printf("Cliente: %s\nSaldo: %.2f\n\nValor a transferir\n\n=>", no[i], s[i]);
				scanf("%f", &x);
			
				s[i]-=x;
				
				for(i=0; i<j2; i++){
					if(i==0){
						system("cls");
	 					printf("Cliente: %s\n\nDigite o n�mero da conta destinataria\n\n=>", no[i]);
						scanf("%d", &ve);
						system("cls");
					}
	 			
					if(n[i]==ve){
						printf("%s � a pessoa que voc� escolheu?\n\n1. Sim\n2. N�o\n\n=> ", no[i]);
						scanf("%d", &j);
						if(j==1)
						break;
						
						else
						i=-1;
					}
				
					else if(i==j2-1){
						printf("\nConta n�o encontrada\n\n");
						i=-1;
						system("pause");
					}
				}
				
				system("cls");
				s[i]+=x;
			
				system("cls");
				printf("Transfer�ncia completa\n\n");
				system("pause");
				system("cls");
			}
			
			else{
				system("cls");
				printf("NENHUMA CONTA CADASTRADA!\n\n");
				system("pause");
				system("cls");
			}
		}	
		 
		else if(x==5){
			if(j2>0){
				system("cls");
				getchar();
				for(i=0; i<j2; i++){
					if(i==0){
						printf("Digite o nome do cliente:\n\n=>");
						scanf("%[^\n]s", &b);
						system("cls");
					}
					
					if(strcmp(b,no[i])==0){
						break;
					}
					
					else if(i==j2-1){
						printf("Cliente n�o econtrado, ou n�o existe\n\n");
						system("pause");
						system("cls");
						i=-1;
					}
				}
				
				printf("Nome: %s\nN� da conta: %d\nSaldo: %.2f\n\n", no[i], n[i], s[i]);
				system("pause");
			}
			
			else{
				system("cls");
				printf("NENHUMA CONTA CADASTRADA!\n\n");
				system("pause");
				system("cls");
			}
			
		}
		else if(x==6){
			printf("\nObrigado por escolher os nossos servi�os\n\n");
			system("pause");
			x=-5;
			system("taskkill /IM consolepauser.exe");
			system("taskkill /IM Caixaxa 5.0.exe");
		}
		 
		else{
			printf("Comando invalido!\n\n");
		 	system("pause");
		 	system("cls");
		}
	}while(x!=-5);
}

int saque(float x, float y){
	int z=y, v[7]={0,0,0,0,0,0,0};
	
	system("cls");
	
	while(z!=0){
		if(z/100>0&&z%100>1||(z-100)/100>0||z%100==0){
			if((z/2)/100>0&&z%100==1){
				v[0]=(z/2)/100;
				z=z-100;
			}
			
			else{
				v[0]=z/100;
				z%=100;
			}
		}
		
		else if(z/50>0&&z%50>1||(z-50)/50>0||z%50==0){
			if((z/2)/50>0&&z%50==1){
				v[1]=(z/2)/50;
				z=z-50;
			}
			
			else{
				v[1]=z/50;
				z%=50;
			}
		}
		
		else if(z/20>0&&z%20>1||(z-20)/20>0||z%20==0){
			if((z/2)/20>0&&z%20==1){
				v[2]=(z/2)/20;
				z=z-20;
			}
			
			else{
				v[2]=z/20;
				z%=20;
			}
		}
		
		else if(z/10>0&&z%10>1||(z-10)/10>0||z%10==0){
			if((z/2)/10>0&&z%10==1){
				v[3]=(z/2)/10;
				z=z-10;
			}
			
			else{
				v[3]=z/10;
				z%=10;
			}
		}
		
		else if(z/5>0&&v[4]==0||(z-5)/5>0||z%5==0){
			if((z/2)/5>0&&z%5==1){
				v[4]=(z/2)/5;
				z=z-5;
			}
			
			else{
				v[4]=z/5;
				z%=5;
			}
		}
		
		else if(z/2>0||z%2==0){
			v[5]=z/2;
			z%=2;
		}
		
		else
		break;
		
	}
	
	printf("Notas\n\nR$100(%d)\nR$50(%d)\nR$20(%d)\nR$10(%d)\nR$5(%d)\nR$2(%d)\n\n", v[0], v[1], v[2], v[3], v[4], v[5]);
	
	x-=y;
	return x;
}                                              

int deposito(float x, float y){
	x+=y;
	
	return x;
}
