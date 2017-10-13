#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	int i, j, x, y, pv[3][3];
	char jooj1[100], jooj2[100], p[3][3]; 
	
	//printf("X|X|X\nO|O|O\nX|X|X\n");
	printf("Jogador 1[X]: ");
	scanf("%[^\n]s", &jooj1);
	fflush(stdin);
	printf("Jogador 2[O]: ");
	scanf("%[^\n]s", &jooj2);
	
	for(i=0; i<3; i++)
	for(j=0; j<3; j++){
		p[i][j]=' ';
		pv[i][j]=0;
	}

	
	do{
		jooj1:
	 	system("cls");
		printf("  0 1 2\n0 %c|%c|%c\n1 %c|%c|%c \n2 %c|%c|%c \n\n%s: ", p[0][0],p[0][1],p[0][2],p[1][0],p[1][1],p[1][2],p[2][0],p[2][1],p[2][2],jooj1);
		scanf("%d%d", &x, &y);
		if(pv[x][y]==0){
			pv[x][y]=1;
			p[x][y]='X';
		}
		
		else{
			printf("Não pode joojar nessa posição!\n\n");
			system("pause");
			goto jooj1;
		}
		
		if(p[0][0]=='X'&&p[0][1]=='X'&&p[0][2]=='X'||p[0][2]=='X'&&p[1][1]=='X'&&p[2][0]=='X'||p[0][0]=='X'&&p[1][0]=='X'&&p[2][0]=='X'||p[0][1]=='X'&&p[1][1]=='X'&&p[2][1]=='X'||p[0][3]=='X'&&p[1][3]=='X'&&p[2][3]=='X'||p[0][0]=='X'&&p[0][1]=='X'&&p[0][2]=='X'||p[1][0]=='X'&&p[1][1]=='X'&&p[1][2]=='X'||p[2][0]=='X'&&p[2][1]=='X'&&p[2][2]=='X'){
			printf("%s venceu!", jooj1);
			break;
		}
		
		jooj2:
		system("cls");
		printf("  0 1 2\n0 %c|%c|%c\n1 %c|%c|%c \n2 %c|%c|%c \n\n%s: ", p[0][0],p[0][1],p[0][2],p[1][0],p[1][1],p[1][2],p[2][0],p[2][1],p[2][2],jooj2);
		scanf("%d%d", &x, &y);
		if(pv[x][y]==0){
			pv[x][y]=1;
			p[x][y]='O';
		}
		
		else{
			printf("Não pode joojar nessa posição!\n\n");
			system("pause");
			goto jooj2;
		}
		
		if(p[0][0]=='O'&&p[0][1]=='O'&&p[0][2]=='O'||p[0][2]=='O'&&p[1][1]=='O'&&p[2][0]=='O'||p[0][0]=='O'&&p[1][0]=='O'&&p[2][0]=='O'||p[0][1]=='O'&&p[1][1]=='O'&&p[2][1]=='O'||p[0][3]=='O'&&p[1][3]=='O'&&p[2][3]=='O'||p[0][0]=='O'&&p[0][1]=='O'&&p[0][2]=='O'||p[1][0]=='O'&&p[1][1]=='O'&&p[1][2]=='O'||p[2][0]=='O'&&p[2][1]=='O'&&p[2][2]=='O'){
			printf("%s venceu!", jooj2);
			break;
		}
		
	} while(1);
}
