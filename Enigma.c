#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char lc[100]="lel", sc[100]="lal", l[100], s[100];
	int me=1000000, ma=0, p=0, im=0, i=0, j, x[1000];
	
	do {
	printf("Login: ");
	gets(l);
	printf("Senha: ");
	gets(s);
	
	if(strcmp(l,lc)!=0||strcmp(s,sc)!=0)
	printf("Senha incorreta!\n\n");
	system("pause");
	system("cls");
} while(strcmp(l,lc)!=0||strcmp(s,sc)!=0);
	printf("Ola %s\n", l);
	printf("Insira numeros:\n\n");
	
	while(1>0) {
		scanf("%d", &x[i]);
		if(x[i]!=0){
		i++;
	}	
		else
		break;
	}
	
	printf("Voce inseriu %d numeros\n", i);
	
	for(j=0; j<=i; j++) {
		if(ma<x[j])
		ma=x[j];
	}
	printf("O maior valor inserido foi %d\n", ma);
	
	for(j=0; j<i; j++) {
		if(me>x[j])
		me=x[j];
	}
	printf("O menor valor inserido foi %d\n", me);
	
	for(j=0; j<i; j++) {
		if(x[j]%2==0)
		p++;
		
		else
		im++;
	}
	printf("Foram inseridos %d numeros pares\nForam inseridos %d numeros impares", p, im);
	return 0;
}
