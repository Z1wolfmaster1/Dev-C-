#include <stdio.h>

int main() {
	long int x, a=0, m=0, d=0;
	
	printf("Digite uma quantidade de dias: ");
	scanf("%d", &x);
	
	a=x/365;
	m=(x%365)/30;
	d=(x%365)%30;
	
	printf("Ano(s): %d\nMes(es): %d\nDia(s): %d", a, m, d);
	
	return 0;
}

