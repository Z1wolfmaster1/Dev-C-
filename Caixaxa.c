#include <stdio.h>
#include <stdlib.h>

int saque(float x, float y);
int deposito(float x, float y);

int main(){
	 float s=1000, x;
	 
	 do{
	 	printf("Saldo = R$%.2f\n\n1. Saque\n2. Deposito\n3. Sair\n\n=>", s);
	 	
	 	scanf("%f", &x);
	 	
	 	if(x==1){
	 		system("cls");
	 		printf("Tamanho do saque:\n\n=>R$");
	 		
			scanf("%f", &x);
			
			s=saque(s,x);
			
			system("pause");
			system("cls");
		 }
		 
		 else if(x==2){
		 	system("cls");
	 		printf("Tamanho do deposito:\n\n=>R$");
	 		
			scanf("%f", &x);
			
			s=deposito(s,x);
			
			system("pause");
			system("cls");
		 }
		 
		 else if(x==3){
		 	printf("\nObrigado por escolher os nossos serviços");
		 }
		 
		 else{
		 	printf("Comando invalido!\n\n");
		 	
		 	system("pause");
		 	system("cls");
		 }
	 }while(x!=3);
}

int saque(float x, float y){
	int z=y, v[7]={0,0,0,0,0,0,0};
	
	system("cls");
	
	while(z>0){
		if(z>=100){
			v[0]++;
			z-=100;
		}
		
		else if(z>=50){
			v[1]++;
			z-=50;
		}
		
		else if(z>=20){
			v[2]++;
			z-=20;
		}
		
		else if(z>=10){
			v[3]++;
			z-=10;
		}
		
		else if(z>=5){
			v[4]++;
			z-=5;
		}
		
		else if(z>=2){
			v[5]++;
			z-=2;
		}
		
		else if(z>=1){
			v[6]++;
			z-=1;
		}
		
		else
		break;
	}
	
	printf("Notas\n\nR$100(%d)\nR$50(%d)\nR$20(%d)\nR$10(%d)\nR$5(%d)\nR$2(%d)\nR$1(%d)\n\n", v[0], v[1], v[2], v[3], v[4], v[5], v[6]);
	
	x-=y;
	return x;
}

int deposito(float x, float y){
	x+=y;
	
	return x;
}
