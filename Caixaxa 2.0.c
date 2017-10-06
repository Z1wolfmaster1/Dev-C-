#include <stdio.h>
#include <stdlib.h>

int saque(float x, float y);
int deposito(float x, float y);

int main(){
	 int i, j, a, ve, n[10000];
	 float x, s[10000];
	 
	 do{
	 	 printf("1. Cadastro\n2. Saque\n3. Deposito\n4. Sair\n\n=>");
	 	
	 	 scanf("%f", &x);
	 	
	 	 if(x==1){
	 	 	system("cls");
	 	 	printf("Quantidade de contas a serem cadastradas\n\n=>");
	 		scanf("%d", &j);
	 		system("cls");
	 		
	 		for(i=0; i<j; i++){
	 			printf("Conta %d\n\nNumero da conta: ", i+1);
				 scanf("%d", &n[i]);
				 printf("\nSaldo: ");
				 scanf("%f", &s[i]);
				 
				 if(i==j-1){
				 	printf("\nCadasto Concluido\n\n");
				 	system("pause");
				 }
				 system("cls");
			 }
		 }
	 	
		else if(x==2){
			system("cls");
			printf("Digite o numero da sua conta\n\n=>");
			scanf("%d", &ve);
			for(i=0; i<j; i++){
				if(n[i]==ve){
					a=1;
					break;
				}
				
				
				else if(i==j-1&&a!=1){
					printf("Conta nao encontrada\n\n");
					a=0;
				}
			}
			if(a==0){
				system("pause");
				system("cls");
				continue;
			}
	 		system("cls");
	 		printf("Saldo: %.2f\n\nTamanho do saque:\n\n=>R$", s[i]);
	 		
			scanf("%f", &x);
			
			s[i]=saque(s[i],x);
			
			system("pause");
			system("cls");
		 }
		 
		 else if(x==3){
		 	system("cls");
			printf("Digite o numero da sua conta\n\n=>");
			scanf("%d", &ve);
			for(i=0; i<j; i++){
				if(n[i]==ve){
					a=1;
					break;
				}
				
				
				else if(i==j-1&&a!=1){
					printf("Conta nao encontrada\n\n");
					a=0;
				}
			}
			if(a==0){
				system("pause");
				system("cls");
				continue;
			}
		 	system("cls");
	 		printf("Saldo: %.2f\n\nTamanho do deposito:\n\n=>R$", s[i]);
	 		
			scanf("%f", &x);
			
			s[i]=deposito(s[i],x);
			
			system("pause");
			system("cls");
		 }
		 
		 else if(x==4){
		 	printf("\nObrigado por escolher os nossos servi�os");
		 }
		 
		 else{
		 	printf("Comando invalido!\n\n");
		 	
		 	system("pause");
		 	system("cls");
		 }
	 }while(x!=4);
}

int saque(float x, float y){
	int z=y, v[7]={0,0,0,0,0,0,0};
	
	system("cls");
	
	while(z!=0){
		printf("%d\n", z);
		if(z/100>0&&z%100>1){
			v[0]=z/100;
			z=z%100;
		}
		
		else if(z/50>0&&z%50>1){
			v[1]=z/50;
			z=z%50;
		}
		
		else if(z/20>0&&z%20>1){
			v[2]=z/20;
			z%=20;
		}
		
		else if(z/10>0&&z%10>1){
			v[3]=z/10;
			z%=10;
		}
		
		else if(z/5>0&&v[4]==0){
			if((z/2)/5>0&&z%5==1){
				v[4]=(z/2)/5;
				z=z-5;
			}
			
			else{
				v[4]=z/5;
				z%=5;
			}
		}
		
		else if(z/2>0){
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
