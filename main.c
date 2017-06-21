#include <stdio.h>
#include <locale.h>
#include <math.h>

void maior();
void qua();
void troca();

int main() {
	
	printf("Digite dez numeros:\n");
	maior();
	
	printf("\n");
	printf("\n");
	system("pause");
	system("cls");
	
	printf("Digite um numero inteiro: ");
	qua();
	
	printf("\n");
	printf("\n");
	system("pause");
	system("cls");
	
	troca();
	
	return 0;
}

void maior() {
	int x[10], i, m=0;
	
	for(i=0;i<10;i++) {
		scanf("%d", &x[i]);
}
 
    for(i=0; i<10; i++) {
    	if(m<x[i])
    	m=x[i];
	}
	
	printf("\nO maior numero digitado foi: %d", m);
}

void qua() {
	int x;
	
	scanf("%d", &x);
	printf("\nO quadrado do numeoro digitado e: %d", x, x=pow(x,2));
}

void troca() {
	int a, b ,x;
	
	printf("Digite os valores para A e B\n\nA: ");
	scanf("%d", &a);
	printf("B: ");
	scanf("%d", &b);
	
	x=a;
	a=b;
	b=x;
	
	printf("\nA: %d\n\nB: %d", a, b);
}
