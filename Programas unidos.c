#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

void z();
void m();
void login();
void patinhos();
void enigma();
void conversor();

void funcaot();
void maior();
void qua();
void troca();

void acidez();
void algarismo();
void alugando();
void ano();
void apresentacao();
void aprovacao();
void area();
void asduas();
void aumento();
void biblioteca();
void bombons();
void brinquedos();
void busca();
void calculo();
void campeonato();
void mundial();
void comparador();
void conceito();
void divisivel();
void notas();
void pneu();

void eleicao();
void eleicao2();
void eleicao3();
void eleicao4();
void eleicao5();
void eleicao6();
void eleicao7();
void eleicao71();
void eleicao8();

int main() {
	setlocale(LC_ALL,"");
	int n, d=0, v=0;
	
	while(d!=2) {
    printf("Z:\\\n\n1. The huxley\n\n2. Sala de aula\n\nEscolha: ");
	scanf("%d", &n);
	
	if(n==1) {
	system("cls");
	printf("Z:\\The huxley\n\n1. Acidez de uma solução\n\n2. Algarismo da casa das unidades\n\n3. Alugando um carro\n\n4. Ano bissexto\n\n5. Apresentação\n\n6. Aprovação\n\n7. Area\n\n8. As duas strings\n\n9. Aumento dos Trabalhadores\n\n10. Biblioteca\n\n11. Bombons\n\n12. Brinquedos do Parque\n\n13. Busca na internet\n\n14. Calculo simples\n\n15. Campeonato\n\n16. Classificação no Mundial\n\n17. Comparador de Números Inteiros\n\n18. Conceito MEC\n\n19. Divisivel por três\n\n20. Notas em ordem crescente\n\n21. Pneu\n\nEscolha: ");
	scanf("%d", &n);
	
	if(n==1) {
		system("cls");
		acidez();
	}
	
	else if(n==2) {
		system("cls");
		algarismo();
	}
	
	else if(n==3) {
		system("cls");
		alugando();
	}
	
	else if(n==4) {
		system("cls");
		ano();
	}
	
	else if(n==5) {
		system("cls");
		apresentacao();
	}
	
	else if(n==6) {
		system("cls");
		aprovacao();
	}
	
	else if(n==7) {
		system("cls");
		area();
	}
	
	else if(n==8) {
		system("cls");
		asduas();
	}
	
	else if(n==9) {
		system("cls");
		aumento();
	}
	
	else if(n==10) {
		system("cls");
		biblioteca();
	}
	
	else if(n==11) {
		system("cls");
		bombons();
	}
	
	else if(n==12) {
		system("cls");
		brinquedos();
	}
	
	else if(n==13) {
		system("cls");
		busca();
	}
	
	else if(n==14) {
		system("cls");
		calculo();
	}
	
	else if(n==15) {
		system("cls");
		campeonato();
	}
	
	else if(n==16) {
		system("cls");
		mundial();
	}
	
	else if(n==17) {
		system("cls");
		comparador();
	}
	
	else if(n==18) {
		system("cls");
		conceito();
	}
	
	else if(n==19) {
		system("cls");
		divisivel();
	}
	
	else if(n==20) {
		system("cls");
		notas();
	}
	
	else if(n==21) {
		system("cls");
		pneu();
	}
	}
	
	else if(n==2) {
	system("cls");
	printf("Z:\\Sala de aula\n\n1. Cinco patinhos\n\n2. Coversor de dias\n\n3. Eleição\n\n4. Enigma\n\n5. Função tripla\n\n6. Login\n\n7. Mariana\n\n8. Zerinho ou um\n\nEscolha: ");
	scanf("%d", &n);
	
	if(n==1) {
	system("cls");
    patinhos();
	}
	
	else if(n==2) {
	system("cls");
    conversor();
	}
	
	else if(n==3) {
		system("cls");
		if(v==0) {
			printf("Z:\\Sala de aula\\Eleição\n\nAqui você pode ver todas as versões do programa Eleição,\nproduzido por Marcos Vinícius e Luiz Gabriel.\n\n");
		    system("pause");
		    system("cls");
		    v++;
		}
		
		printf("Z:\\Sala de aula\\Eleição\n\n1. Eleição v1.0\n\n2. Eleição v2.0\n\n3. Eleição v3.0\n\n4. Eleição v4.0\n\n5. Eleição v5.0\n\n6. Eleição v6.0\n\n7. Eleição v7.0\n\n8. Eleição v7.1\n\n9. Eleição v8.0\n\nEscolha: ");
		scanf("%d", &n);
		
		if(n==1) {
	        system("cls");
	        eleicao();
	    }
	
	    else if(n==2) {
	        system("cls");
	        eleicao2();
	    }
	
	    else if(n==3) {
	        system("cls");
	        eleicao3();
	    }
	
	    else if(n==4) {
		    system("cls");
	        eleicao4();
	    }
	    
	    else if(n==5) {
	        system("cls");
	        eleicao5();
	    }
	    
	    else if(n==6) {
	        system("cls");
	        eleicao6();
	    }
	    
	    else if(n==7) {
	        system("cls");
	        eleicao7();
	    }
	    
	    else if(n==8) {
	        system("cls");
	        eleicao71();
	    }
	    
	    else if(n==9) {
	        system("cls");
	        eleicao8();
			}	
	    
	    else
	    printf("\nPrograma inexistente\n");
	}
	
	else if(n==3) {
		system("cls");
	    enigma();
	}
	
	else if(n==4) {
		system("cls");
	    funcaot();
	}
	
	else if(n==5) {
	system("cls");
	login();
	}
	
	else if(n==6) {
	system("cls");
	m();
	}
	
	else if(n==7) {
		system("cls");
	    z();
	}
	

	
	else
	printf("\nPrograma inexistente\n");
	}
	
	else {
		printf("\nDiretório inexistente\n\n");
		system("pause");
		system("cls");
		continue;
	}
	printf("\n");
	system("pause");
	system("cls");
	printf("1. Voltar ao menu\n\n2. Sair do programa\n\nEscolha: ");
	scanf("%d", &d);
	
	if(d==1)
	system("cls");
	}
	
	return 0;
}

void z() {
	int a=0,b=0,c=0,t=0;
	
	while(a>-1&&b>-1&&c>-1&&a<2&&b<2&&c<2) {
	    scanf("%d%d%d",&a,&b,&c);
	
	    if(a>-1&&b>-1&&c>-1){
	    if((a!=b) && (b==c))
	    printf("A venceu!\n\n");
	
	    else if((b!=a) && (a==c))
	    printf("B venceu!\n\n");
	
	    else if((c!=a) && (a==b))
	    printf("C venceu!\n\n");
	
	    else if((a==b) && (b==c))
	    printf("Empate\n\n");
	    t++;
        }
    }
    printf("\nTentativas: %d", t);
}

void m() {
	setlocale(LC_ALL,"");
	int i, e, j;
	printf("Quanto conta Mariana: ");
	scanf("%d", &e);
	printf("\n");
	for(i=1; i<=e; i++) {
		printf("Mariana conta %d\nMariana conta %d: ", i, i);
		for(j=1;j<=i; j++) {
			printf("é %d, ",j);
		}
		printf("é!\nAna Viva Mariana, viva a Mariana\n");
	}
}

void login() {
	setlocale(LC_ALL,"");
	char s[100], sc[100]="laranja", l[100], lc[100]="Eduardo";
	
	while(strcmp(l,lc)!=0) {
		printf("Digite o login: ");
	    scanf("%s", l);
		if(strcmp(l,lc)!=0){
		printf("\nLOGIN INCORRETO, TENTE NOVAMENTE!\n\n");
		system("pause");
		system("CLS");
	}
	    else {
	    	system("CLS");
		    while(strcmp(s,sc)!=0) {
	        printf("Olá senhor Eduardo, digite sua senha.\n\nSenha: ");
	        scanf("%s", s);
	        if(strcmp(s,sc)==0)
	        printf("\n\nAcesso Concedido.");
	
	        else {
		        printf("\n\nSENHA INCORRETA, TENTE NOVAMENTE!\n\n");
		        system("pause");
		        system("CLS");
		        }
	        }
	    }
	}
}

void patinhos() {
	int p, i;
	printf("Quantos patinhos foram passear: ");
	scanf("%d", &p);
	
	for(i=p; i>=2; i--) {
		printf("\n%d patinhos foram passear\nalem das montanhas para brincar\na mamae gritou quack quack quack\n mas so %d patinhos voltaram de la\n", i, i-1);
}
    if(p>8000)
	printf("\n1 patinhos foi passear\nalem das montanhas para brincar\na mamae gritou quack quack quack\nmas nenhum patinho voltou de la\n\na mamae patinha foi procurar\nalem das montanhas\nna beira do mar\na mamae gritou: quack, quack, quack, quack\ne os MAIS DE 8000(%d) patinhos voltaram de la\n", p);
	
    else 
	printf("\n1 patinhos foi passear\nalem das montanhas para brincar\na mamae gritou quack quack quack\nmas nenhum patinho voltou de la\n\na mamae patinha foi procurar\nalem das montanhas\nna beira do mar\na mamae gritou: quack, quack, quack, quack\nE os %d patinhos voltaram de la\n", p);

}

void acidez() {
	int x;
	
	scanf("%d", &x);
	
	if(x>=1&&x<7)
	printf("Acida");
	
	else if(x==7)
	printf("Neutra");
	
	else
	printf("Basica");
}
void alugando() {
	float v, d, q;
	
	scanf("%f\n%f", &d, &q);
	
	if(q<=(d*100)) {
	v=(d*90);
	printf("%.2f", v);
	}
	
	else if(q>(d*100)) {
		v=(d*90)+((q-(d*100))*12);
		printf("%.2f", v);
	}
}
void ano() {
	int an, a1, a2, i, j, x[10000];
	
	scanf("%d%d", &a1, &a2);
	
	an=a2-a1;
	
	for(i=0; i<an; i++) {
		for(j=a1; j<=a2; j++) {
			x[i]=j;
        }
    }

    for(i=0; i<an; i++) {
    	if(x[i] % 4 == 0 && (x[i] % 400 == 0 || x[i] % 100 != 0))
    	printf("%d\n", x[i]);
}
}
void apresentacao() {
	int x[100], i;
	
	for(i=0;i<5;i++) {
		scanf("%d", &x[i]);
}

    if((x[0]==1||x[1]==1)&&(x[2]==1&&x[3]==1)&&x[4]==1)
    printf("APROVADO");
    
    else
    printf("0");
}
void bombons() {
	float ap, cp, pp, aq, cq, pq, v;
	
	scanf("%f\n%f\n%f\n%f\n%f\n%f", &ap, &cp, &pp, &aq, &cq, &pq);
	v=ap*aq+cp*cq+pp*pq;
	printf("\nValor: R$%.2f", v);
}
void brinquedos() {
	int a, i;
	
	scanf("%d%d", &a, &i);
	
	if(i>=16)
	printf("3");
	
	else if(a>=150&&i>=12)
	printf("2");
	
	else if(a>=140&&i>=14)
	printf("1");
	
	else
	printf("0");
}
void campeonato() {
	int Cv, Ce, Cs, Fv, Fe, Fs;
	
	scanf("%d%d%d%d%d%d", &Ce, &Cv, &Cs, &Fv, &Fe, &Fs);
	
	Cv=Cv*3;
	Fv=Fv*3;
	
	if(Cv+Ce>Fv+Fe)
	printf("C");
	
	else if(Cv+Ce<Fv+Fe)
	printf("F");
	
	else if(Cv+Ce==Fv+Fe) {
		if(Cs>Fs)
		printf("C");
		
		else if(Cs<Fs)
		printf("F");
		
		else if(Cs==Fs)
		printf("=");
	}
}
void mundial() {
	int p[6], pf=0, i;
	
	for(i=0; i<6; i++) {
		scanf("%d", &p[i]);
		pf=pf+p[i];
	}
	
	if(pf<100)
	printf("Eliminado");
	
	else
	printf("Classificado");
}
void comparador() {
	int x, y;
	
	scanf("%d%d", &x, &y);
	
	if(x>y)
	printf("1\n");
	
	else
	printf("0\n");
	
	if(x==y)
	printf("1\n");
	
	else
	printf("0\n");
	
	if(x<y)
	printf("1\n");
	
	else
	printf("0\n");
	
	if(x!=y)
	printf("1\n");
	
	else
	printf("0\n");
	
	if(x>=y)
	printf("1\n");
	
	else
	printf("0\n");
	
	if(x<=y)
	printf("1\n");
	
	else
	printf("0\n");
}
void conceito() {
	double a, l;
	
	scanf("%lf\n%lf", &a, &l);
	
	if((a/l)==(1/1)||(a/l)==(1/2)||(a/l)==(1/3)||(a/l)==(1/4)||(a/l)==(1/5)||(a/l)==(1/6)||(a/l)==(1/7)||(a/l)==(1/8)) {
	printf("A");
	}
	
	else if(a/l==(1/9)||(a/l)==(1/10)||(a/l)==(1/11)||(a/l)==(a/l)==(1/12)) {
	printf("B");
	}
	
	else if(a/l==(1/13)||(a/l)==(1/14)||(a/l)==(1/15)||(a/l)==(1/16)||(a/l)==(1/17)||(a/l)==(1/18)) {
	printf("C");
	}
	
	else
	printf("D");
}
void divisivel() {
	int n, i, d=0;
	
	scanf("%d", &n);
	
	for(i=1; i<=n; i++) {
		if(i%3==0&&n%i==0)
		d++;
}
    
    if(d==0)
    printf("O numero nao possui divisores multiplos de 3!");
    
    else
    printf("%d", d);
}
void notas() {
	int a,b,c,x;
	
	scanf("%d%d%d",&a,&b,&c);
	
	if( a>b ) {
		x = a;
		a = b;
		b = x;
	}
	
	if( a>c ) {
		x = a;
		a = c;
		c = x;
	}
	
	if( b<c ) printf("%d\n%d\n%d", a, b, c);
	else printf("%d\n%d\n%d", a, c, b);
}
void pneu() {
	int x, y;
	
	scanf("%d\n%d", &x, &y);
	
	printf("%d", x-y);
}

void eleicao71() {
	setlocale(LC_ALL,"");
	int n, cpf, br=0, a=0, b=0, c=0, cpfi[100000], x=0, i, v;
	
	inicio:
	v=0;
	printf("Digite seu CPF: ");
	scanf("%d", &cpf);
	
	if (cpf>10000&&cpf<1000000) {
	
	
	
	for(i=0; i<100000; i++) {
		if(cpfi[i]==cpf) {
			v=0;
			break;
		}
		
		else
		v=1;
	}
	    cpfi[x]=cpf;
        
		if(v==1) {
		printf("\nCPF válido.\n\n");
		system("pause");
		system("CLS");
		
		while(n>-1) {
		printf("Para votar no candidato A, digite 1 e dê Enter..\n\nPara votar no candidato B, digite 2 e dê Enter..\n\nPara votar no candidato C, digite 3 e dê Enter..\n\nPara votar em Branco, digite 0 e dê Enter..\n\n");
		printf("\nNúmero: ");
		scanf("%d", &n);
		
		if(n==1) {
			a++;
			x++;
			system("pause");
		    system("CLS");
			goto inicio;
		}
		
		else if(n==2) {
			b++;
			x++;
			system("pause");
		    system("CLS");
			goto inicio;
		}
		
		else if(n==3) {
			c++;
			x++;
			system("pause");
		    system("CLS");
			goto inicio;
		}
		
		else if(n==0) {
			br++;
			x++;
			system("pause");
		    system("CLS");
			goto inicio;
		}
		
		else if(n>3||n<-1) {
			printf("\nNúmero inválido\n\n");
			goto inicio;
		}
		system("pause");
	    system("CLS");
		}
		
		printf("Candidato A: %d\nCandidato B: %d\nCandidato C: %d\nVotos brancos: %d", a, b, c, br);
		
		if(a>(a+b+c)/2) 
		printf("\n\nO candidato A foi eleito!\n");
		
		else if(b>(a+b+c)/2) 
		printf("\n\nO candidato B foi eleito!\n");
		
		else if(c>(a+b+c)/2) 
		printf("\n\nO candidato C foi eleito!\n");
	
		else if(a>b&&a>c&&b>c){
			printf("\n\nTeremos um segundo turno!\n\n");
			n=0;
			a=0;
			b=0;
			br=0;
			system("pause");
			system("CLS");
			
			while(n>-1) {
			printf("Para votar no candidato A, digite 1 e dê Enter..\n\nPara votar no candidato B, digite 2 e dê Enter..\n\nPara votar em Branco, digite 0 e dê Enter.\n\n");
			printf("\nNúmero: ");
			scanf("%d", &n);
			
			if(n==1){
				a++;
				system("pause");
		        system("CLS");
			}
			
			else if(n==2) {
				b++;
				system("pause");
		        system("CLS");
			}
			
			else if(n==0) {
				br++;
				system("pause");
		        system("CLS");
			}
			
			else if (n>3||n<-1) {
				printf("\nNúmero inválido\n\n");
				system("pause");
				system("CLS");
			}
			
		}
		
		printf("Candidato A: %d\nCandidato B: %d\nVotos brancos: %d\n\n", a, b, br);
		
		if(a>b) 
		printf("O candidato A foi eleito!");
		
		else if(b>a)
		printf("O candidato B foi eleito!");
		
		else {
		inicio1:
		printf("Informe o candidato mais velho\n\nPara escolher o candidato A, digite 1 e dê Enter.\n\nPara escolher o candidato B, digite 2 e dê Enter.\n\n");
		printf("\nNúmero: ");
		scanf("%d", &n);
		system("cls");
			
		if(n==1) 
		printf("\nO candidato A foi eleito!\n");
		
		else if(n==2)
		printf("\nO candidato B foi eleito!\n");
		
		else {
			printf("Numero invalido!\n");
			system("pause");
			system("cls");
			goto inicio1;
		}
		}
		}
		
		else if(a>=b&&a>c&&b>c){
			printf("\n\nTeremos um segundo turno!\n\n");
			n=0;
			a=0;
			b=0;
			br=0;
			system("pause");
			system("CLS");
			
			while(n>-1) {
			printf("Para votar no candidato A, digite 1 e dê Enter.\n\nPara votar no candidato B, digite 2 e dê Enter.\n\nPara votar em Branco, digite 0 e dê Enter.\n\n");
			printf("\nNúmero: ");
			scanf("%d", &n);
			
			if(n==1) {
				a++;
				system("pause");
		        system("CLS");
			}
			
			else if(n==2) {
				b++;
				system("pause");
		        system("CLS");
			}
			
			else if(n==0) {
				br++;
				system("pause");
		system("CLS");
			}
			
			else if (n>3||n<-1) {
				printf("\nNúmero inválido\n\n");
				system("pause");
		        system("CLS");				
			}
			
			system("pause");
			system("CLS");
		}
		
		printf("Candidato A: %d\nCandidato B: %d\nVotos brancos: %d\n\n", a, b, br);
		
		if(a>b) 
		printf("\nO candidato A foi eleito!\n");
		
		else if(b>a)
		printf("\nO candidato B foi eleito!\n");
		
		else {
		inicio2:
		printf("Informe o candidato mais velho\n\nPara escolher o candidato A, digite 1 e dê Enter.\n\nPara escolher o candidato B, digite 2 e dê Enter.\n\n");
		printf("\nNúmero: ");
		scanf("%d", &n);
		system("cls");
			
		if(n==1) 
		printf("\nO candidato A foi eleito!\n");
		
		else if(n==2)
		printf("\nO candidato B foi eleito!\n");
		
		else {
			printf("Numero invalido!\n");
			system("pause");
			system("cls");
			goto inicio2;
		}
		}
		}
		
		else if(a>b&&a>c&&c>b){
			printf("\n\nTeremos um segundo turno!\n\n");
			system("pause");
			n=0;
			a=0;
			c=0;
			br=0;
			system("CLS");
			
			while(n>-1) {
			printf("Para votar no candidato A, digite 1 e dê Enter.\n\nPara votar no candidato C, digite 3 e dê Enter.\n\nPara votar em Branco, digite 0 e dê Enter.\n\n");
			printf("\nNúmero: ");
			scanf("%d", &n);
			
			if(n==1) {
				a++;
			}
			
			else if(n==3) {
				c++;
			}
			
			else if(n==0) {
				br++;
			}
			
			else if (n>3||n<-1) {
				printf("\nNúmero inválido\n\n");
			}
			
			system("pause");
			system("CLS");
		}
		
		printf("Candidato A: %d\nCandidato C: %d\nVotos brancos: %d\n\n", a, c, br);
		
		if(a>c) 
		printf("O candidato A foi eleito!");
		
		else if(c>a)
		printf("O candidato C foi eleito!");
		
		else {
		inicio3:
		printf("Informe o candidato mais velho\n\nPara escolher o candidato A, digite 1 e dê Enter.\n\nPara escolher o candidato C, digite 3 e dê Enter.\n\n");
		printf("\nNúmero: ");
		scanf("%d", &n);
		system("cls");
			
		if(n==1) 
		printf("\nO candidato A foi eleito!\n");
		
		else if(n==3)
		printf("\nO candidato C foi eleito!\n");
		
		else {
			printf("Numero invalido!\n");
			system("pause");
			system("cls");
			goto inicio3;
		}
		}
	}
		
		else if(a>b&&a>=c&&c>b){
			printf("\n\nTeremos um segundo turno!\n\n");
			system("pause");
			n=0;
			a=0;
			c=0;
			br=0;
			system("CLS");
			
			while(n>-1) {
			printf("Para votar no candidato A, digite 1 e dê Enter.\n\nPara votar no candidato C, digite 3 e dê Enter.\n\nPara votar em Branco, digite 0 e dê Enter.\n\n");
			printf("\nNúmero: ");
			scanf("%d", &n);
			
			if(n==1) {
				a++;
			}
			
			else if(n==3) {
				c++;
			}
			
			else if(n==0) {
				br++;
			}
			
			else if (n>3||n<-1) {
				printf("\nNúmero inválido\n\n");
			}
			
			system("pause");
			system("CLS");
		}
		
		printf("Candidato A: %d\nCandidato C: %d\nVotos brancos: %d\n\n", a, c, br);
		
		if(a>c) 
		printf("O candidato A foi eleito!");
		
		else if(c>a)
		printf("O candidato C foi eleito!");
		
		else {
		inicio4:
		printf("Informe o candidato mais velho\n\nPara escolher o candidato A, digite 1 e dê Enter.\n\nPara escolher o candidato C, digite 2 e dê Enter.\n\n");
		printf("\nNúmero: ");
		scanf("%d", &n);
		system("cls");
			
		if(n==1) 
		printf("\nO candidato A foi eleito!\n");
		
		else if(n==3)
		printf("\nO candidato C foi eleito!\n");
		
		else {
			printf("Numero invalido!\n");
			system("pause");
			system("cls");
			goto inicio4;
		}
		}
	}
		
		else if(b>a&&b>=c&&c>a) {
			printf("\n\nTeremos um segundo turno!\n\n");
			system("pause");
			n=0;
			b=0;
			c=0;
			br=0;
			system("CLS");
			
			while(n>-1) {
			printf("Para votar no candidato B, digite 2 e dê Enter.\n\nPara votar no candidato C, digite 3 e dê Enter.\n\nPara votar em Branco, digite 0 e dê Enter.\n\n");
			printf("\nNúmero: ");
			scanf("%d", &n);
			
			if(n==2) {
				b++;
			}
			
			else if(n==3) {
				c++;
			}
			
			else if(n==0) {
				br++;
			}
			
			else if (n>3||n<-1) {
				printf("\nNúmero inválido\n");
			}
			
			system("pause");
			system("CLS");
		}
		
			printf("Candidato B: %d\nCandidato C: %d\nVotos brancos: %d\n\n", b, c, br);
			
			if(b>c)
			printf("O candidato B foi eleito!\n\n");
			
			else if(c>b) 
			printf("O candidato C foi eleito!\n\n");
			
			else {
		inicio5:
		printf("Informe o candidato mais velho\n\nPara escolher o candidato B, digite 1 e dê Enter.\n\nPara escolher o candidato C, digite 2 e dê Enter.\n\n");
		printf("\nNúmero: ");
		scanf("%d", &n);
		system("cls");
			
		if(n==2) 
		printf("O candidato B foi eleito!");
		
		else if(n==3)
		printf("O candidato C foi eleito!");
		
		else {
			printf("Numero invalido!\n");
			system("pause");
			system("cls");
			goto inicio5;
		}
		}
		}
		else {
			printf("\n\nTeremos um segundo turno!\n\n");
			system("pause");
			n=0;
			b=0;
			c=0;
			br=0;
			system("CLS");
			
			while(n>-1) {
			printf("Para votar no candidato B, digite 2 e dê Enter.\n\nPara votar no candidato C, digite 3 e dê Enter.\n\nPara votar em Branco, digite 0 e dê Enter.\n\n");
			printf("\nNúmero: ");
			scanf("%d", &n);
			
			if(n==2) {
				b++;
			}
			
			else if(n==3) {
				c++;
			}
			
			else if(n==0) {
				br++;
			}
			
			else if (n>3||n<-1) {
				printf("\nNúmero inválido\n");
			}
			
			system("pause");
			system("CLS");
		}
		
			printf("Candidato B: %d\nCandidato C: %d\nVotos brancos: %d\n\n", b, c, br);
			
			if(b>c)
			printf("O candidato B foi eleito!\n\n");
			
			else if(c>b)
			printf("O candidato C foi eleito!\n\n");
			
			else {
		inicio6:
		printf("Informe o candidato mais velho\n\nPara escolher o candidato B, digite 1 e dê Enter.\n\nPara escolher o candidato C, digite 2 e dê Enter.\n\n");
		printf("\nNúmero: ");
		scanf("%d", &n);
		system("cls");
			
		if(n==2) 
		printf("\nO candidato B foi eleito!\n");
		
		else if(n==3)
		printf("\nO candidato C foi eleito!\n");
		
		else {
			printf("Numero invalido!\n");
			system("pause");
			system("cls");
			goto inicio6;
		}
		}
		}
	}
	else {
		printf("\nCPF inválido\n\n");
		system("pause");
		system("cls");
		goto inicio;
	}
}
	else {
		printf("\nCPF inválido\n\n");
		system("pause");
		system("cls");
		goto inicio;
	}
}

void algarismo() {
	int n, x;
	
	scanf("%d", &n);
	
	if(n>=0){
	        if(n<10)
	        printf("%d", n);
	
	else{
	    x=n%10;
	    printf("%d", x);
	    }
	}
	
	else{
		if(n>-10)
	        printf("%d", n);
	
	else{
	    x=n%10;
	    printf("%d", x);
	    }
	}
}

void aprovacao() {
	double n1, n2, n3, m;
	
	printf("Informe a primeira nota: ");
	scanf("%lf", &n1);
	printf("Informe a segunda nota: ");
	scanf("%lf", &n2);
	printf("Informe a terceira nota: ");
	scanf("%lf", &n3);
	
	m=(n1+n2+n3)/3;
	
	if(m>=7)
	printf("Aprovado com media %lf", m);
	
	else{
		if(m>=5&&m<7)
		printf("Recuperacao com media %lf", m);
		
		else{
			if(m<5)
			printf("Reprovado com media %lf", m);
		}
	}
}

void area() {
	const double pi=3.14159;
	double a, r1, r2;
	
	scanf("%lf", &r1);
	r2=r1/100;
	printf("Area = %.4f", a, a=pi*(pow(r2,2)));
}

void asduas() {
	char a[121], b[121];
	
	scanf("%s\n%s", &a, &b);
	if(strcmp(a, b) == 0) {
		printf("IGUAIS");
	}
	else {
		printf("DIFERENTES");
	}
}

void aumento() {
	float n;
	
	scanf("%f", &n);
	
	if(n>500)
	printf("%.2f", n, n=n+(n/10));
	
	else if((n<500) && (n>300))
	printf("%.2f", n, n=n+((n/10)-((n/100)*3)));
	
	else
	printf("%.2f", n, n=n+((n/10)/2));
}

void biblioteca() {
	int d;
	float m;
	
	scanf("%d", &d);
	printf("%.2f", m, m=d*0.75);
}

void busca() {
	int t;
	
	scanf("%d", &t);
	
	if((t>1) && (t<1000))
	printf("%d", t=t*4);
	
	else
	printf("");
}

void calculo() {
	float v, v1, v2, a, b, c, d;
	
	scanf("%f %f %f\n%f %f %f", &a, &b, &v1, &c, &d, &v2);
	
	v=(b*v1)+(d*v2);
	
	printf("VALOR A PAGAR: R$ %.2f", v);
}

void eleicao() {
	setlocale(LC_ALL, "");
	int n, cpf, br=0, a=0, b=0, c=0;
	printf("Digite seu CPF: ");
	scanf("%d", &cpf);
	if (cpf>10000&&cpf<100000) {
		printf("CPF válido.\n");
		system("pause");
		system("CLS");
		printf("Para votar em Branco, digite 0.\n\nPara votar no candidato A, digite 1.\n\nPara votar no candidato B, digite 2.\n\nPara votar no candidato C, digite 3.\n\n");
		while(n>-1) {
		printf("\nNúmero: ");
		scanf("%d", &n);
		if(n==1)
		a++;
		else if(n==2)
		b++;
		else if(n==3)
		c++;
		else if(n==0)
		br++;
		else printf("Número inválido");
		system("pause");
		system("CLS");
		}
		printf("Candidato A: %d\nCandidato B: %d\nCandidato C: %d\nVotos brancos: %d", a, b, c, br);
		if(a>(a+b+c)/2) printf("O candidato A foi eleito!");
		else if(b>(a+b+c)/2) printf("O candidato B foi eleito!");
		else if(c>(a+b+c)/2) printf("O candidato C foi eleito!");
		else if(a>b&&a>c&&b>c){
			printf("\nTeremos um segundo turno!");
			n=0;
			system("pause");
			system("CLS");
			printf("Para votar em Branco, digite 0.\n\nPara votar no candidato A, digite 1.\n\nPara votar no candidato B, digite 2.\n\n");
			while(n>-1) {
			printf("\nNúmero: ");
			scanf("%d", &n);
			if(n==1)
			a++;
			else if(n==2)
			b++;
			else if(n==0)
			br++;
			else printf("Número inválido");
			system("pause");
			system("CLS");
			system("pause");
			system("CLS");
		}
		if(a>b) printf("O candidato A foi eleito!");
			else ("O candidato B foi eleito!");
	}
		else if(a>b&&a>c&&c>b){
			printf("\nTeremos um segundo turno!");
			system("pause");
			n=0;
			system("CLS");
			printf("Para votar em Branco, digite 0.\n\nPara votar no candidato A, digite 1.\n\nPara votar no candidato C, digite 3.\n\n");
			while(n>-1) {
			printf("\nNúmero: ");
			scanf("%d", &n);
			if(n==1)
			a++;
			else if(n==3)
			c++;
			else if(n==0)
			br++;
			else printf("Número inválido");
			system("pause");
			system("CLS");
		}
		if(a>c) printf("O candidato A foi eleito!");
			else ("O candidato C foi eleito!");
			system("pause");
			system("CLS");
	}
		else {
			printf("\nTeremos um segundo turno!");
			system("pause");
			n=0;
			system("CLS");
			printf("Para votar em Branco, digite 0.\n\nPara votar no candidato B, digite 2.\n\nPara votar no candidato C, digite 3.\n\n");
			while(n>-1) {
			printf("\nNúmero: ");
			scanf("%d", &n);
			if(n==2)
			b++;
			else if(n==3)
			c++;
			else if(n==0)
			br++;
			else printf("Número inválido");
		}
			if(b>c) printf("O candidato B foi eleito!");
			else ("O candidato C foi eleito!");
			system("pause");
			system("CLS");
		}
	}
	else printf("CPF inválido");
}

void eleicao2(){
	setlocale(LC_ALL,"");
	int n, cpf, br=0, a=0, b=0, c=0;
	
	printf("Digite seu CPF: ");
	scanf("%d", &cpf);
	
	if (cpf>10000&&cpf<100000) {
		printf("\nCPF válido.\n\n");
		system("pause");
		system("CLS");
		
		while(n>-1) {
		printf("Para votar em Branco, digite 0.\n\nPara votar no candidato A, digite 1.\n\nPara votar no candidato B, digite 2.\n\nPara votar no candidato C, digite 3.\n\n");
		printf("\nNúmero: ");
		scanf("%d", &n);
		if(n==1)
		a++;
		else if(n==2)
		b++;
		else if(n==3)
		c++;
		else if(n==0)
		br++;
		else if (n>3||n<-1) printf("\nNúmero inválido\n\n");
		system("pause");
		system("CLS");
		}
		
		printf("Candidato A: %d\nCandidato B: %d\nCandidato C: %d\nVotos brancos: %d", a, b, c, br);
		if(a>(a+b+c)/2) 
		printf("\n\nO candidato A foi eleito!\n");
		
		else if(b>(a+b+c)/2) 
		printf("\n\nO candidato B foi eleito!\n");
		
		else if(c>(a+b+c)/2) 
		printf("\n\nO candidato C foi eleito!\n");
	
		else if(a>b&&a>c&&b>c){
			printf("\nTeremos um segundo turno!\n\n");
			n=0;
			system("pause");
			system("CLS");
			
			while(n>-1) {
			printf("Para votar em Branco, digite 0.\n\nPara votar no candidato A, digite 1.\n\nPara votar no candidato B, digite 2.\n\n");
			printf("\nNúmero: ");
			scanf("%d", &n);
			if(n==1)
			a++;
			else if(n==2)
			b++;
			else if(n==0)
			br++;
			else if (n>3||n<-1) printf("\nNúmero inválido\n\n");
			system("pause");
			system("CLS");
		}
		
		if(a>b) 
		printf("O candidato A foi eleito!");
		
		else 
		printf("O candidato B foi eleito!");
	}
		else if(a>b&&a>c&&c>b){
			printf("\nTeremos um segundo turno!\n\n");
			system("pause");
			n=0;
			system("CLS");
			
			while(n>-1) {
			printf("Para votar em Branco, digite 0.\n\nPara votar no candidato A, digite 1.\n\nPara votar no candidato C, digite 3.\n\n");
			printf("\nNúmero: ");
			scanf("%d", &n);
			if(n==1)
			a++;
			else if(n==3)
			c++;
			else if(n==0)
			br++;
			else if (n>3||n<-1) printf("\nNúmero inválido\n\n");
			system("pause");
			system("CLS");
		}
		
		if(a>c) 
		printf("O candidato A foi eleito!");
		
		else 
		printf("O candidato C foi eleito!");
	}
		else {
			printf("\nTeremos um segundo turno!\n\n");
			system("pause");
			n=0;
			system("CLS");
			
			while(n>-1) {
			printf("Para votar em Branco, digite 0.\n\nPara votar no candidato B, digite 2.\n\nPara votar no candidato C, digite 3.\n\n");
			printf("\nNúmero: ");
			scanf("%d", &n);
			if(n==2)
			b++;
			else if(n==3)
			c++;
			else if(n==0)
			br++;
			else if (n>3||n<-1) 
			printf("\nNúmero inválido\n");
			system("pause");
			system("CLS");
		}
			
			if(b>c)
			printf("O candidato B foi eleito!\n\n");
			
			else 
			printf("O candidato C foi eleito!\n\n");
			
		}
	}
	else printf("\nCPF inválido\n");
}

void eleicao3(){
	setlocale(LC_ALL,"");
	int n, cpf, br=0, a=0, b=0, c=0;
	
	printf("Digite seu CPF: ");
	scanf("%d", &cpf);
	
	if (cpf>10000&&cpf<100000) {
		printf("\nCPF válido.\n\n");
		system("pause");
		system("CLS");
		
		while(n>-1) {
		printf("Para votar em Branco, digite 0.\n\nPara votar no candidato A, digite 1.\n\nPara votar no candidato B, digite 2.\n\nPara votar no candidato C, digite 3.\n\n");
		printf("\nNúmero: ");
		scanf("%d", &n);
		
		if(n==1) a++;
		
		else if(n==2) b++;
		
		else if(n==3) c++;
		
		else if(n==0) br++;
		
		else if (n>3||n<-1) printf("\nNúmero inválido\n\n");
		system("pause");
		system("CLS");
		}
		
		printf("Candidato A: %d\nCandidato B: %d\nCandidato C: %d\nVotos brancos: %d", a, b, c, br);
		
		if(a>(a+b+c)/2) printf("\n\nO candidato A foi eleito!\n");
		
		else if(b>(a+b+c)/2) printf("\n\nO candidato B foi eleito!\n");
		
		else if(c>(a+b+c)/2) printf("\n\nO candidato C foi eleito!\n");
	
		else if(a>b&&a>c&&b>c){
			printf("\nTeremos um segundo turno!\n\n");
			n=0;
			a=0;
			b=0;
			br=0;
			system("pause");
			system("CLS");
			
			while(n>-1) {
			printf("Para votar em Branco, digite 0.\n\nPara votar no candidato A, digite 1.\n\nPara votar no candidato B, digite 2.\n\n");
			printf("\nNúmero: ");
			scanf("%d", &n);
			
			if(n==1) a++;
			
			else if(n==2) b++;
			
			else if(n==0) br++;
			
			else if (n>3||n<-1) printf("\nNúmero inválido\n\n");
			
			system("pause");
			system("CLS");
		}
		
		printf("Candidato A: %d\nCandidato B: %d\nVotos brancos: %d\n\n", a, b, br);
		
		if(a>b) 
		printf("O candidato A foi eleito!");
		
		else 
		printf("O candidato B foi eleito!");
	}
		else if(a>b&&a>c&&c>b){
			printf("\nTeremos um segundo turno!\n\n");
			system("pause");
			n=0;
			a=0;
			c=0;
			br=0;
			system("CLS");
			
			while(n>-1) {
			printf("Para votar em Branco, digite 0.\n\nPara votar no candidato A, digite 1.\n\nPara votar no candidato C, digite 3.\n\n");
			printf("\nNúmero: ");
			scanf("%d", &n);
			
			if(n==1) a++;
			
			else if(n==3) c++;
			
			else if(n==0) br++;
			
			else if (n>3||n<-1) printf("\nNúmero inválido\n\n");
			
			system("pause");
			system("CLS");
		}
		
		printf("Candidato A: %d\nCandidato C: %d\nVotos brancos: %d\n\n", a, c, br);
		
		if(a>c) 
		printf("O candidato A foi eleito!");
		
		else 
		printf("O candidato C foi eleito!");
	}
		else {
			printf("\nTeremos um segundo turno!\n\n");
			system("pause");
			n=0;
			b=0;
			c=0;
			br=0;
			system("CLS");
			
			while(n>-1) {
			printf("Para votar em Branco, digite 0.\n\nPara votar no candidato B, digite 2.\n\nPara votar no candidato C, digite 3.\n\n");
			printf("\nNúmero: ");
			scanf("%d", &n);
			
			if(n==2) b++;
			
			else if(n==3) c++;
			
			else if(n==0) br++;
			
			else if (n>3||n<-1) 
			
			printf("\nNúmero inválido\n");
			system("pause");
			system("CLS");
		}
		
			printf("Candidato B: %d\nCandidato C: %d\nVotos brancos: %d\n\n", b, c, br);
			
			if(b>c)
			printf("O candidato B foi eleito!\n\n");
			
			else 
			printf("O candidato C foi eleito!\n\n");
			
		}
	}
	else printf("\nCPF inválido\n");
}

void eleicao4(){
	setlocale(LC_ALL,"");
	int n, cpf, br=0, a=0, b=0, c=0;
	
	printf("Digite seu CPF: ");
	scanf("%d", &cpf);
	
	if (cpf>10000&&cpf<100000) {
		printf("\nCPF válido.\n\n");
		system("pause");
		system("CLS");
		
		while(n>-1) {
		printf("Para votar em Branco, digite 0.\n\nPara votar no candidato A, digite 1.\n\nPara votar no candidato B, digite 2.\n\nPara votar no candidato C, digite 3.\n\n");
		printf("\nNúmero: ");
		scanf("%d", &n);
		
		if(n==1) a++;
		
		else if(n==2) b++;
		
		else if(n==3) c++;
		
		else if(n==0) br++;
		
		else if (n>3||n<-1) printf("\nNúmero inválido\n\n");
		system("pause");
		system("CLS");
		}
		
		printf("Candidato A: %d\nCandidato B: %d\nCandidato C: %d\nVotos brancos: %d", a, b, c, br);
		
		if(a>(a+b+c)/2) printf("\n\nO candidato A foi eleito!\n");
		
		else if(b>(a+b+c)/2) printf("\n\nO candidato B foi eleito!\n");
		
		else if(c>(a+b+c)/2) printf("\n\nO candidato C foi eleito!\n");
	
		else if(a>b&&a>c&&b>c){
			printf("\nTeremos um segundo turno!\n\n");
			n=0;
			a=0;
			b=0;
			br=0;
			system("pause");
			system("CLS");
			
			while(n>-1) {
			printf("Para votar em Branco, digite 0.\n\nPara votar no candidato A, digite 1.\n\nPara votar no candidato B, digite 2.\n\n");
			printf("\nNúmero: ");
			scanf("%d", &n);
			
			if(n==1) a++;
			
			else if(n==2) b++;
			
			else if(n==0) br++;
			
			else if (n>3||n<-1) printf("\nNúmero inválido\n\n");
			
			system("pause");
			system("CLS");
		}
		
		printf("Candidato A: %d\nCandidato B: %d\nVotos brancos: %d\n\n", a, b, br);
		
		if(a>b) 
		printf("O candidato A foi eleito!");
		
		else 
		printf("O candidato B foi eleito!");
	}
		
		else if(a>=b&&a>c&&b>c){
			printf("\nTeremos um segundo turno!\n\n");
			n=0;
			a=0;
			b=0;
			br=0;
			system("pause");
			system("CLS");
			
			while(n>-1) {
			printf("Para votar em Branco, digite 0.\n\nPara votar no candidato A, digite 1.\n\nPara votar no candidato B, digite 2.\n\n");
			printf("\nNúmero: ");
			scanf("%d", &n);
			
			if(n==1) a++;
			
			else if(n==2) b++;
			
			else if(n==0) br++;
			
			else if (n>3||n<-1) printf("\nNúmero inválido\n\n");
			
			system("pause");
			system("CLS");
		}
		
		printf("Candidato A: %d\nCandidato B: %d\nVotos brancos: %d\n\n", a, b, br);
		
		if(a>b) 
		printf("O candidato A foi eleito!");
		
		else 
		printf("O candidato B foi eleito!");
		}
		
		else if(a>b&&a>c&&c>b){
			printf("\nTeremos um segundo turno!\n\n");
			system("pause");
			n=0;
			a=0;
			c=0;
			br=0;
			system("CLS");
			
			while(n>-1) {
			printf("Para votar em Branco, digite 0.\n\nPara votar no candidato A, digite 1.\n\nPara votar no candidato C, digite 3.\n\n");
			printf("\nNúmero: ");
			scanf("%d", &n);
			
			if(n==1) a++;
			
			else if(n==3) c++;
			
			else if(n==0) br++;
			
			else if (n>3||n<-1) printf("\nNúmero inválido\n\n");
			
			system("pause");
			system("CLS");
		}
		
		printf("Candidato A: %d\nCandidato C: %d\nVotos brancos: %d\n\n", a, c, br);
		
		if(a>c) 
		printf("O candidato A foi eleito!");
		
		else 
		printf("O candidato C foi eleito!");
	}
		
		else if(a>b&&a>=c&&c>b){
			printf("\nTeremos um segundo turno!\n\n");
			system("pause");
			n=0;
			a=0;
			c=0;
			br=0;
			system("CLS");
			
			while(n>-1) {
			printf("Para votar em Branco, digite 0.\n\nPara votar no candidato A, digite 1.\n\nPara votar no candidato C, digite 3.\n\n");
			printf("\nNúmero: ");
			scanf("%d", &n);
			
			if(n==1) a++;
			
			else if(n==3) c++;
			
			else if(n==0) br++;
			
			else if (n>3||n<-1) printf("\nNúmero inválido\n\n");
			
			system("pause");
			system("CLS");
		}
		
		printf("Candidato A: %d\nCandidato C: %d\nVotos brancos: %d\n\n", a, c, br);
		
		if(a>c) 
		printf("O candidato A foi eleito!");
		
		else 
		printf("O candidato C foi eleito!");
	}
		
		else if (b>a&&b>=c&&c>a){
			printf("\nTeremos um segundo turno!\n\n");
			system("pause");
			n=0;
			b=0;
			c=0;
			br=0;
			system("CLS");
			
			while(n>-1) {
			printf("Para votar em Branco, digite 0.\n\nPara votar no candidato B, digite 2.\n\nPara votar no candidato C, digite 3.\n\n");
			printf("\nNúmero: ");
			scanf("%d", &n);
			
			if(n==2) b++;
			
			else if(n==3) c++;
			
			else if(n==0) br++;
			
			else if (n>3||n<-1) 
			
			printf("\nNúmero inválido\n");
			system("pause");
			system("CLS");
		}
		
			printf("Candidato B: %d\nCandidato C: %d\nVotos brancos: %d\n\n", b, c, br);
			
			if(b>c)
			printf("O candidato B foi eleito!\n\n");
			
			else 
			printf("O candidato C foi eleito!\n\n");
			
		}
		else {
			printf("\nTeremos um segundo turno!\n\n");
			system("pause");
			n=0;
			b=0;
			c=0;
			br=0;
			system("CLS");
			
			while(n>-1) {
			printf("Para votar em Branco, digite 0.\n\nPara votar no candidato B, digite 2.\n\nPara votar no candidato C, digite 3.\n\n");
			printf("\nNúmero: ");
			scanf("%d", &n);
			
			if(n==2) b++;
			
			else if(n==3) c++;
			
			else if(n==0) br++;
			
			else if (n>3||n<-1) 
			
			printf("\nNúmero inválido\n");
			system("pause");
			system("CLS");
		}
		
			printf("Candidato B: %d\nCandidato C: %d\nVotos brancos: %d\n\n", b, c, br);
			
			if(b>c)
			printf("O candidato B foi eleito!\n\n");
			
			else 
			printf("O candidato C foi eleito!\n\n");
			
		}
	}
	else printf("\nCPF inválido\n");
}

void eleicao5(){
	setlocale(LC_ALL,"");
	int n, cpf, br=0, a=0, b=0, c=0;
	
	printf("Digite seu CPF: ");
	scanf("%d", &cpf);
	
	if (cpf>10000&&cpf<100000) {
		printf("\nCPF válido.\n\n");
		system("pause");
		system("CLS");
		
		while(n>-1) {
		printf("Para votar no candidato A, digite 1.\n\nPara votar no candidato B, digite 2.\n\nPara votar no candidato C, digite 3.\n\nPara votar em Branco, digite 0.\n\n");
		printf("\nNúmero: ");
		scanf("%d", &n);
		
		if(n==1) 
		a++;
		
		else if(n==2) 
		b++;
		
		else if(n==3) 
		c++;
		
		else if(n==0) 
		br++;
		
		else if(n>3||n<-1) 
		printf("\nNúmero inválido\n\n");
		system("pause");
		system("CLS");
		}
		
		printf("Candidato A: %d\nCandidato B: %d\nCandidato C: %d\nVotos brancos: %d", a, b, c, br);
		
		if(a>(a+b+c)/2) 
		printf("\n\nO candidato A foi eleito!\n");
		
		else if(b>(a+b+c)/2) 
		printf("\n\nO candidato B foi eleito!\n");
		
		else if(c>(a+b+c)/2) 
		printf("\n\nO candidato C foi eleito!\n");
	
		else if(a>b&&a>c&&b>c){
			printf("\n\nTeremos um segundo turno!\n\n");
			n=0;
			a=0;
			b=0;
			br=0;
			system("pause");
			system("CLS");
			
			while(n>-1) {
			printf("Para votar no candidato A, digite 1.\n\nPara votar no candidato B, digite 2.\n\nPara votar em Branco, digite 0.\n\n");
			printf("\nNúmero: ");
			scanf("%d", &n);
			
			if(n==1)
			a++;
			
			else if(n==2) 
			b++;
			
			else if(n==0) 
			br++;
			
			else if (n>3||n<-1) 
			printf("\nNúmero inválido\n\n");
			
			system("pause");
			system("CLS");
		}
		
		printf("Candidato A: %d\nCandidato B: %d\nVotos brancos: %d\n\n", a, b, br);
		
		if(a>b) 
		printf("O candidato A foi eleito!");
		
		else if(b>a)
		printf("O candidato B foi eleito!");
		
		else {
		inicio1:
		printf("Informe o candidato mais velho\n\nPara escolher o candidato A, digite 1.\n\nPara escolher o candidato B, digite 2.\n\n");
		printf("\nNúmero: ");
		scanf("%d", &n);
		system("cls");
			
		if(n==1) 
		printf("\nO candidato A foi eleito!\n");
		
		else if(n==2)
		printf("\nO candidato B foi eleito!\n");
		
		else {
			printf("Numero invalido!\n");
			system("pause");
			system("cls");
			goto inicio1;
		}
		}
	}
		
		else if(a>=b&&a>c&&b>c){
			printf("\n\nTeremos um segundo turno!\n\n");
			n=0;
			a=0;
			b=0;
			br=0;
			system("pause");
			system("CLS");
			
			while(n>-1) {
			printf("Para votar no candidato A, digite 1.\n\nPara votar no candidato B, digite 2.\n\nPara votar em Branco, digite 0.\n\n");
			printf("\nNúmero: ");
			scanf("%d", &n);
			
			if(n==1) 
			a++;
			
			else if(n==2) 
			b++;
			
			else if(n==0) 
			br++;
			
			else if (n>3||n<-1) 
			printf("\nNúmero inválido\n\n");
			
			system("pause");
			system("CLS");
		}
		
		printf("Candidato A: %d\nCandidato B: %d\nVotos brancos: %d\n\n", a, b, br);
		
		if(a>b) 
		printf("\nO candidato A foi eleito!\n");
		
		else if(b>a)
		printf("\nO candidato B foi eleito!\n");
		
		else {
		inicio2:
		printf("Informe o candidato mais velho\n\nPara escolher o candidato A, digite 1.\n\nPara escolher o candidato B, digite 2.\n\n");
		printf("\nNúmero: ");
		scanf("%d", &n);
		system("cls");
			
		if(n==1) 
		printf("\nO candidato A foi eleito!\n");
		
		else if(n==2)
		printf("\nO candidato B foi eleito!\n");
		
		else {
			printf("Numero invalido!\n");
			system("pause");
			system("cls");
			goto inicio2;
		}
		}
		}
		
		else if(a>b&&a>c&&c>b){
			printf("\n\nTeremos um segundo turno!\n\n");
			system("pause");
			n=0;
			a=0;
			c=0;
			br=0;
			system("CLS");
			
			while(n>-1) {
			printf("Para votar no candidato A, digite 1.\n\nPara votar no candidato C, digite 3.\n\nPara votar em Branco, digite 0.\n\n");
			printf("\nNúmero: ");
			scanf("%d", &n);
			
			if(n==1) 
			a++;
			
			else if(n==3) 
			c++;
			
			else if(n==0) 
			br++;
			
			else if (n>3||n<-1) 
			printf("\nNúmero inválido\n\n");
			
			system("pause");
			system("CLS");
		}
		
		printf("Candidato A: %d\nCandidato C: %d\nVotos brancos: %d\n\n", a, c, br);
		
		if(a>c) 
		printf("O candidato A foi eleito!");
		
		else if(c>a)
		printf("O candidato C foi eleito!");
		
		else {
		inicio3:
		printf("Informe o candidato mais velho\n\nPara escolher o candidato A, digite 1.\n\nPara escolher o candidato C, digite 3.\n\n");
		printf("\nNúmero: ");
		scanf("%d", &n);
		system("cls");
			
		if(n==1) 
		printf("\nO candidato A foi eleito!\n");
		
		else if(n==3)
		printf("\nO candidato C foi eleito!\n");
		
		else {
			printf("Numero invalido!\n");
			system("pause");
			system("cls");
			goto inicio3;
		}
		}
	}
		
		else if(a>b&&a>=c&&c>b){
			printf("\n\nTeremos um segundo turno!\n\n");
			system("pause");
			n=0;
			a=0;
			c=0;
			br=0;
			system("CLS");
			
			while(n>-1) {
			printf("Para votar no candidato A, digite 1.\n\nPara votar no candidato C, digite 3.\n\nPara votar em Branco, digite 0.\n\n");
			printf("\nNúmero: ");
			scanf("%d", &n);
			
			if(n==1) 
			a++;
			
			else if(n==3) 
			c++;
			
			else if(n==0) 
			br++;
			
			else if (n>3||n<-1) 
			printf("\nNúmero inválido\n\n");
			system("pause");
			system("CLS");
		}
		
		printf("Candidato A: %d\nCandidato C: %d\nVotos brancos: %d\n\n", a, c, br);
		
		if(a>c) 
		printf("O candidato A foi eleito!");
		
		else if(c>a)
		printf("O candidato C foi eleito!");
		
		else {
		inicio4:
		printf("Informe o candidato mais velho\n\nPara escolher o candidato A, digite 1.\n\nPara escolher o candidato C, digite 2.\n\n");
		printf("\nNúmero: ");
		scanf("%d", &n);
		system("cls");
			
		if(n==1) 
		printf("\nO candidato A foi eleito!\n");
		
		else if(n==3)
		printf("\nO candidato C foi eleito!\n");
		
		else {
			printf("Numero invalido!\n");
			system("pause");
			system("cls");
			goto inicio4;
		}
		}
	}
		
		else if(b>a&&b>=c&&c>a) {
			printf("\n\nTeremos um segundo turno!\n\n");
			system("pause");
			n=0;
			b=0;
			c=0;
			br=0;
			system("CLS");
			
			while(n>-1) {
			printf("Para votar no candidato B, digite 2.\n\nPara votar no candidato C, digite 3.\n\nPara votar em Branco, digite 0.\n\n");
			printf("\nNúmero: ");
			scanf("%d", &n);
			
			if(n==2) 
			b++;
			
			else if(n==3) 
			c++;
			
			else if(n==0) 
			br++;
			
			else if (n>3||n<-1) 
			printf("\nNúmero inválido\n");
			system("pause");
			system("CLS");
		}
		
			printf("Candidato B: %d\nCandidato C: %d\nVotos brancos: %d\n\n", b, c, br);
			
			if(b>c)
			printf("O candidato B foi eleito!\n\n");
			
			else if(c>b) 
			printf("O candidato C foi eleito!\n\n");
			
			else {
		inicio5:
		printf("Informe o candidato mais velho\n\nPara escolher o candidato B, digite 1.\n\nPara escolher o candidato C, digite 2.\n\n");
		printf("\nNúmero: ");
		scanf("%d", &n);
		system("cls");
			
		if(n==2) 
		printf("O candidato B foi eleito!");
		
		else if(n==3)
		printf("O candidato C foi eleito!");
		
		else {
			printf("Numero invalido!\n");
			system("pause");
			system("cls");
			goto inicio5;
		}
		}
			
		}
		else {
			printf("\n\nTeremos um segundo turno!\n\n");
			system("pause");
			n=0;
			b=0;
			c=0;
			br=0;
			system("CLS");
			
			while(n>-1) {
			printf("Para votar no candidato B, digite 2.\n\nPara votar no candidato C, digite 3.\n\nPara votar em Branco, digite 0.\n\n");
			printf("\nNúmero: ");
			scanf("%d", &n);
			
			if(n==2) 
			b++;
			
			else if(n==3) 
			c++;
			
			else if(n==0) 
			br++;
			
			else if (n>3||n<-1) 
			printf("\nNúmero inválido\n");
			system("pause");
			system("CLS");
		}
		
			printf("Candidato B: %d\nCandidato C: %d\nVotos brancos: %d\n\n", b, c, br);
			
			if(b>c)
			printf("O candidato B foi eleito!\n\n");
			
			else if(c>b)
			printf("O candidato C foi eleito!\n\n");
			
			else {
		inicio6:
		printf("Informe o candidato mais velho\n\nPara escolher o candidato B, digite 1.\n\nPara escolher o candidato C, digite 2.\n\n");
		printf("\nNúmero: ");
		scanf("%d", &n);
		system("cls");
			
		if(n==2) 
		printf("\nO candidato B foi eleito!\n");
		
		else if(n==3)
		printf("\nO candidato C foi eleito!\n");
		
		else {
			printf("Numero invalido!\n");
			system("pause");
			system("cls");
			goto inicio6;
		}
		}
		}
	}
	else printf("\nCPF inválido\n");
}

void eleicao6(){
	setlocale(LC_ALL,"");
	int n, cpf, br=0, a=0, b=0, c=0, cpfi[1000000000], x=0, i, v;
	
	inicio:
	printf("Digite seu CPF: ");
	scanf("%d", &cpf);
	
	if (cpf>10000&&cpf<100000) {
	
	cpfi[x]=cpf;
	
	for(i=0; i<1000000000; i++) {
		if(cpfi[i]==cpf)
		v=0;
		
		else
		v=1;
	}
	
        if(v==1) {
		printf("\nCPF válido.\n\n");
		system("pause");
		system("CLS");
		
		while(n>-1) {
		printf("Para votar no candidato A, digite 1 e dê Enter..\n\nPara votar no candidato B, digite 2 e dê Enter..\n\nPara votar no candidato C, digite 3 e dê Enter..\n\nPara votar em Branco, digite 0 e dê Enter..\n\n");
		printf("\nNúmero: ");
		scanf("%d", &n);
		
		if(n==1) {
			a++;
			x++;
			system("pause");
		    system("CLS");
			goto inicio;
		}
		
		else if(n==2) {
			b++;
			x++;
			system("pause");
		    system("CLS");
			goto inicio;
		}
		
		else if(n==3) {
			c++;
			x++;
			system("pause");
		    system("CLS");
			goto inicio;
		}
		
		else if(n==0) {
			br++;
			x++;
			system("pause");
		    system("CLS");
			goto inicio;
		}
		
		else if(n>3||n<-1) {
			printf("\nNúmero inválido\n\n");
			goto inicio;
		}
		system("pause");
		system("CLS");
		goto inicio;
		}
		
		printf("Candidato A: %d\nCandidato B: %d\nCandidato C: %d\nVotos brancos: %d", a, b, c, br);
		
		if(a>(a+b+c)/2) 
		printf("\n\nO candidato A foi eleito!\n");
		
		else if(b>(a+b+c)/2) 
		printf("\n\nO candidato B foi eleito!\n");
		
		else if(c>(a+b+c)/2) 
		printf("\n\nO candidato C foi eleito!\n");
	
		else if(a>b&&a>c&&b>c){
			printf("\n\nTeremos um segundo turno!\n\n");
			n=0;
			a=0;
			b=0;
			br=0;
			system("pause");
			system("CLS");
			
			while(n>-1) {
			inicioa:
			printf("Para votar no candidato A, digite 1 e dê Enter..\n\nPara votar no candidato B, digite 2 e dê Enter..\n\nPara votar em Branco, digite 0 e dê Enter.\n\n");
			printf("\nNúmero: ");
			scanf("%d", &n);
			
			if(n==1){
				a++;
				system("pause");
		        system("CLS");
				goto inicioa;
			}
			
			else if(n==2) {
				b++;
				system("pause");
		        system("CLS");
				goto inicioa;
			}
			
			else if(n==0) {
				br++;
				system("pause");
		        system("CLS");
				goto inicioa;
			}
			
			else if (n>3||n<-1) {
				printf("\nNúmero inválido\n\n");
				system("pause");
				system("CLS");
				goto inicioa;
			}
			
		}
		
		printf("Candidato A: %d\nCandidato B: %d\nVotos brancos: %d\n\n", a, b, br);
		
		if(a>b) 
		printf("O candidato A foi eleito!");
		
		else if(b>a)
		printf("O candidato B foi eleito!");
		
		else {
		inicio1:
		printf("Informe o candidato mais velho\n\nPara escolher o candidato A, digite 1 e dê Enter.\n\nPara escolher o candidato B, digite 2 e dê Enter.\n\n");
		printf("\nNúmero: ");
		scanf("%d", &n);
		system("cls");
			
		if(n==1) 
		printf("\nO candidato A foi eleito!\n");
		
		else if(n==2)
		printf("\nO candidato B foi eleito!\n");
		
		else {
			printf("Numero invalido!\n");
			system("pause");
			system("cls");
			goto inicio1;
		}
		}
		}
		
		else if(a>=b&&a>c&&b>c){
			printf("\n\nTeremos um segundo turno!\n\n");
			n=0;
			a=0;
			b=0;
			br=0;
			system("pause");
			system("CLS");
			
			while(n>-1) {
			iniciob:
			printf("Para votar no candidato A, digite 1 e dê Enter.\n\nPara votar no candidato B, digite 2 e dê Enter.\n\nPara votar em Branco, digite 0 e dê Enter.\n\n");
			printf("\nNúmero: ");
			scanf("%d", &n);
			
			if(n==1) {
				a++;
				system("pause");
		        system("CLS");
				goto iniciob;
			}
			
			else if(n==2) {
				b++;
				system("pause");
		        system("CLS");
				goto iniciob;
			}
			
			else if(n==0) {
				br++;
				system("pause");
		system("CLS");
				goto iniciob;
			}
			
			else if (n>3||n<-1) {
				printf("\nNúmero inválido\n\n");
				system("pause");
		        system("CLS");				
				goto iniciob;
			}
			
			system("pause");
			system("CLS");
		}
		
		printf("Candidato A: %d\nCandidato B: %d\nVotos brancos: %d\n\n", a, b, br);
		
		if(a>b) 
		printf("\nO candidato A foi eleito!\n");
		
		else if(b>a)
		printf("\nO candidato B foi eleito!\n");
		
		else {
		inicio2:
		printf("Informe o candidato mais velho\n\nPara escolher o candidato A, digite 1 e dê Enter.\n\nPara escolher o candidato B, digite 2 e dê Enter.\n\n");
		printf("\nNúmero: ");
		scanf("%d", &n);
		system("cls");
			
		if(n==1) 
		printf("\nO candidato A foi eleito!\n");
		
		else if(n==2)
		printf("\nO candidato B foi eleito!\n");
		
		else {
			printf("Numero invalido!\n");
			system("pause");
			system("cls");
			goto inicio2;
		}
		}
		}
		
		else if(a>b&&a>c&&c>b){
			printf("\n\nTeremos um segundo turno!\n\n");
			system("pause");
			n=0;
			a=0;
			c=0;
			br=0;
			system("CLS");
			
			while(n>-1) {
			inicioc:
			printf("Para votar no candidato A, digite 1 e dê Enter.\n\nPara votar no candidato C, digite 3 e dê Enter.\n\nPara votar em Branco, digite 0 e dê Enter.\n\n");
			printf("\nNúmero: ");
			scanf("%d", &n);
			
			if(n==1) {
				a++;
				goto inicioc;
			}
			
			else if(n==3) {
				c++;
				goto inicioc;
			}
			
			else if(n==0) {
				br++;
				goto inicioc;
			}
			
			else if (n>3||n<-1) {
				printf("\nNúmero inválido\n\n");
				goto inicioc;
			}
			
			system("pause");
			system("CLS");
		}
		
		printf("Candidato A: %d\nCandidato C: %d\nVotos brancos: %d\n\n", a, c, br);
		
		if(a>c) 
		printf("O candidato A foi eleito!");
		
		else if(c>a)
		printf("O candidato C foi eleito!");
		
		else {
		inicio3:
		printf("Informe o candidato mais velho\n\nPara escolher o candidato A, digite 1 e dê Enter.\n\nPara escolher o candidato C, digite 3 e dê Enter.\n\n");
		printf("\nNúmero: ");
		scanf("%d", &n);
		system("cls");
			
		if(n==1) 
		printf("\nO candidato A foi eleito!\n");
		
		else if(n==3)
		printf("\nO candidato C foi eleito!\n");
		
		else {
			printf("Numero invalido!\n");
			system("pause");
			system("cls");
			goto inicio3;
		}
		}
	}
		
		else if(a>b&&a>=c&&c>b){
			printf("\n\nTeremos um segundo turno!\n\n");
			system("pause");
			n=0;
			a=0;
			c=0;
			br=0;
			system("CLS");
			
			while(n>-1) {
			iniciod:
			printf("Para votar no candidato A, digite 1 e dê Enter.\n\nPara votar no candidato C, digite 3 e dê Enter.\n\nPara votar em Branco, digite 0 e dê Enter.\n\n");
			printf("\nNúmero: ");
			scanf("%d", &n);
			
			if(n==1) {
				a++;
				goto iniciod;
			}
			
			else if(n==3) {
				c++;
				goto iniciod;
			}
			
			else if(n==0) {
				br++;
				goto iniciod;
			}
			
			else if (n>3||n<-1) {
				printf("\nNúmero inválido\n\n");
				goto iniciod;
			}
			
			system("pause");
			system("CLS");
		}
		
		printf("Candidato A: %d\nCandidato C: %d\nVotos brancos: %d\n\n", a, c, br);
		
		if(a>c) 
		printf("O candidato A foi eleito!");
		
		else if(c>a)
		printf("O candidato C foi eleito!");
		
		else {
		inicio4:
		printf("Informe o candidato mais velho\n\nPara escolher o candidato A, digite 1 e dê Enter.\n\nPara escolher o candidato C, digite 2 e dê Enter.\n\n");
		printf("\nNúmero: ");
		scanf("%d", &n);
		system("cls");
			
		if(n==1) 
		printf("\nO candidato A foi eleito!\n");
		
		else if(n==3)
		printf("\nO candidato C foi eleito!\n");
		
		else {
			printf("Numero invalido!\n");
			system("pause");
			system("cls");
			goto inicio4;
		}
		}
	}
		
		else if(b>a&&b>=c&&c>a) {
			printf("\n\nTeremos um segundo turno!\n\n");
			system("pause");
			n=0;
			b=0;
			c=0;
			br=0;
			system("CLS");
			
			while(n>-1) {
			inicioe:
			printf("Para votar no candidato B, digite 2 e dê Enter.\n\nPara votar no candidato C, digite 3 e dê Enter.\n\nPara votar em Branco, digite 0 e dê Enter.\n\n");
			printf("\nNúmero: ");
			scanf("%d", &n);
			
			if(n==2) {
				b++;
				goto inicioe;
			}
			
			else if(n==3) {
				c++;
				goto inicioe;
			}
			
			else if(n==0) {
				br++;
				goto inicioe;
			}
			
			else if (n>3||n<-1) {
				printf("\nNúmero inválido\n");
				goto inicioe;
			}
			
			system("pause");
			system("CLS");
		}
		
			printf("Candidato B: %d\nCandidato C: %d\nVotos brancos: %d\n\n", b, c, br);
			
			if(b>c)
			printf("O candidato B foi eleito!\n\n");
			
			else if(c>b) 
			printf("O candidato C foi eleito!\n\n");
			
			else {
		inicio5:
		printf("Informe o candidato mais velho\n\nPara escolher o candidato B, digite 1 e dê Enter.\n\nPara escolher o candidato C, digite 2 e dê Enter.\n\n");
		printf("\nNúmero: ");
		scanf("%d", &n);
		system("cls");
			
		if(n==2) 
		printf("O candidato B foi eleito!");
		
		else if(n==3)
		printf("O candidato C foi eleito!");
		
		else {
			printf("Numero invalido!\n");
			system("pause");
			system("cls");
			goto inicio5;
		}
		}
		}
		else {
			printf("\n\nTeremos um segundo turno!\n\n");
			system("pause");
			n=0;
			b=0;
			c=0;
			br=0;
			system("CLS");
			
			while(n>-1) {
			iniciof:
			printf("Para votar no candidato B, digite 2 e dê Enter.\n\nPara votar no candidato C, digite 3 e dê Enter.\n\nPara votar em Branco, digite 0 e dê Enter.\n\n");
			printf("\nNúmero: ");
			scanf("%d", &n);
			
			if(n==2) {
				b++;
				goto iniciof;
			}
			
			else if(n==3) {
				c++;
				goto iniciof;
			}
			
			else if(n==0) {
				br++;
				goto iniciof;
			}
			
			else if (n>3||n<-1) {
				printf("\nNúmero inválido\n");
				goto iniciof;
			}
			
			system("pause");
			system("CLS");
		}
		
			printf("Candidato B: %d\nCandidato C: %d\nVotos brancos: %d\n\n", b, c, br);
			
			if(b>c)
			printf("O candidato B foi eleito!\n\n");
			
			else if(c>b)
			printf("O candidato C foi eleito!\n\n");
			
			else {
		inicio6:
		printf("Informe o candidato mais velho\n\nPara escolher o candidato B, digite 1 e dê Enter.\n\nPara escolher o candidato C, digite 2 e dê Enter.\n\n");
		printf("\nNúmero: ");
		scanf("%d", &n);
		system("cls");
			
		if(n==2) 
		printf("\nO candidato B foi eleito!\n");
		
		else if(n==3)
		printf("\nO candidato C foi eleito!\n");
		
		else {
			printf("Numero invalido!\n");
			system("pause");
			system("cls");
			goto inicio6;
		}
		}
		}
	}
}
	else printf("\nCPF inválido\n");
}

void eleicao7(){
	setlocale(LC_ALL,"");
	int n, cpf, br=0, a=0, b=0, c=0, cpfi[100000], x=0, i, v;
	
	inicio:
	v=0;
	printf("Digite seu CPF: ");
	scanf("%d", &cpf);
	
	if (cpf>10000&&cpf<1000000) {
	
	
	
	for(i=0; i<100000; i++) {
		if(cpfi[i]==cpf) {
			v=0;
			break;
		}
		
		else
		v=1;
	}
	    cpfi[x]=cpf;
        
		if(v==1) {
		printf("\nCPF válido.\n\n");
		system("pause");
		system("CLS");
		
		while(n>-1) {
		printf("Para votar no candidato A, digite 1 e dê Enter..\n\nPara votar no candidato B, digite 2 e dê Enter..\n\nPara votar no candidato C, digite 3 e dê Enter..\n\nPara votar em Branco, digite 0 e dê Enter..\n\n");
		printf("\nNúmero: ");
		scanf("%d", &n);
		
		if(n==1) {
			a++;
			x++;
			system("pause");
		    system("CLS");
			goto inicio;
		}
		
		else if(n==2) {
			b++;
			x++;
			system("pause");
		    system("CLS");
			goto inicio;
		}
		
		else if(n==3) {
			c++;
			x++;
			system("pause");
		    system("CLS");
			goto inicio;
		}
		
		else if(n==0) {
			br++;
			x++;
			system("pause");
		    system("CLS");
			goto inicio;
		}
		
		else if(n>3||n<-1) {
			printf("\nNúmero inválido\n\n");
			goto inicio;
		}
		system("pause");
	    system("CLS");
		}
		
		printf("Candidato A: %d\nCandidato B: %d\nCandidato C: %d\nVotos brancos: %d", a, b, c, br);
		
		if(a>(a+b+c)/2) 
		printf("\n\nO candidato A foi eleito!\n");
		
		else if(b>(a+b+c)/2) 
		printf("\n\nO candidato B foi eleito!\n");
		
		else if(c>(a+b+c)/2) 
		printf("\n\nO candidato C foi eleito!\n");
	
		else if(a>b&&a>c&&b>c){
			printf("\n\nTeremos um segundo turno!\n\n");
			n=0;
			a=0;
			b=0;
			br=0;
			system("pause");
			system("CLS");
			
			while(n>-1) {
			inicioa:
			printf("Para votar no candidato A, digite 1 e dê Enter..\n\nPara votar no candidato B, digite 2 e dê Enter..\n\nPara votar em Branco, digite 0 e dê Enter.\n\n");
			printf("\nNúmero: ");
			scanf("%d", &n);
			
			if(n==1){
				a++;
				system("pause");
		        system("CLS");
				goto inicioa;
			}
			
			else if(n==2) {
				b++;
				system("pause");
		        system("CLS");
				goto inicioa;
			}
			
			else if(n==0) {
				br++;
				system("pause");
		        system("CLS");
				goto inicioa;
			}
			
			else if (n>3||n<-1) {
				printf("\nNúmero inválido\n\n");
				system("pause");
				system("CLS");
				goto inicioa;
			}
			
		}
		
		printf("Candidato A: %d\nCandidato B: %d\nVotos brancos: %d\n\n", a, b, br);
		
		if(a>b) 
		printf("O candidato A foi eleito!");
		
		else if(b>a)
		printf("O candidato B foi eleito!");
		
		else {
		inicio1:
		printf("Informe o candidato mais velho\n\nPara escolher o candidato A, digite 1 e dê Enter.\n\nPara escolher o candidato B, digite 2 e dê Enter.\n\n");
		printf("\nNúmero: ");
		scanf("%d", &n);
		system("cls");
			
		if(n==1) 
		printf("\nO candidato A foi eleito!\n");
		
		else if(n==2)
		printf("\nO candidato B foi eleito!\n");
		
		else {
			printf("Numero invalido!\n");
			system("pause");
			system("cls");
			goto inicio1;
		}
		}
		}
		
		else if(a>=b&&a>c&&b>c){
			printf("\n\nTeremos um segundo turno!\n\n");
			n=0;
			a=0;
			b=0;
			br=0;
			system("pause");
			system("CLS");
			
			while(n>-1) {
			iniciob:
			printf("Para votar no candidato A, digite 1 e dê Enter.\n\nPara votar no candidato B, digite 2 e dê Enter.\n\nPara votar em Branco, digite 0 e dê Enter.\n\n");
			printf("\nNúmero: ");
			scanf("%d", &n);
			
			if(n==1) {
				a++;
				system("pause");
		        system("CLS");
				goto iniciob;
			}
			
			else if(n==2) {
				b++;
				system("pause");
		        system("CLS");
				goto iniciob;
			}
			
			else if(n==0) {
				br++;
				system("pause");
		system("CLS");
				goto iniciob;
			}
			
			else if (n>3||n<-1) {
				printf("\nNúmero inválido\n\n");
				system("pause");
		        system("CLS");				
				goto iniciob;
			}
			
			system("pause");
			system("CLS");
		}
		
		printf("Candidato A: %d\nCandidato B: %d\nVotos brancos: %d\n\n", a, b, br);
		
		if(a>b) 
		printf("\nO candidato A foi eleito!\n");
		
		else if(b>a)
		printf("\nO candidato B foi eleito!\n");
		
		else {
		inicio2:
		printf("Informe o candidato mais velho\n\nPara escolher o candidato A, digite 1 e dê Enter.\n\nPara escolher o candidato B, digite 2 e dê Enter.\n\n");
		printf("\nNúmero: ");
		scanf("%d", &n);
		system("cls");
			
		if(n==1) 
		printf("\nO candidato A foi eleito!\n");
		
		else if(n==2)
		printf("\nO candidato B foi eleito!\n");
		
		else {
			printf("Numero invalido!\n");
			system("pause");
			system("cls");
			goto inicio2;
		}
		}
		}
		
		else if(a>b&&a>c&&c>b){
			printf("\n\nTeremos um segundo turno!\n\n");
			system("pause");
			n=0;
			a=0;
			c=0;
			br=0;
			system("CLS");
			
			while(n>-1) {
			inicioc:
			printf("Para votar no candidato A, digite 1 e dê Enter.\n\nPara votar no candidato C, digite 3 e dê Enter.\n\nPara votar em Branco, digite 0 e dê Enter.\n\n");
			printf("\nNúmero: ");
			scanf("%d", &n);
			
			if(n==1) {
				a++;
				goto inicioc;
			}
			
			else if(n==3) {
				c++;
				goto inicioc;
			}
			
			else if(n==0) {
				br++;
				goto inicioc;
			}
			
			else if (n>3||n<-1) {
				printf("\nNúmero inválido\n\n");
				goto inicioc;
			}
			
			system("pause");
			system("CLS");
		}
		
		printf("Candidato A: %d\nCandidato C: %d\nVotos brancos: %d\n\n", a, c, br);
		
		if(a>c) 
		printf("O candidato A foi eleito!");
		
		else if(c>a)
		printf("O candidato C foi eleito!");
		
		else {
		inicio3:
		printf("Informe o candidato mais velho\n\nPara escolher o candidato A, digite 1 e dê Enter.\n\nPara escolher o candidato C, digite 3 e dê Enter.\n\n");
		printf("\nNúmero: ");
		scanf("%d", &n);
		system("cls");
			
		if(n==1) 
		printf("\nO candidato A foi eleito!\n");
		
		else if(n==3)
		printf("\nO candidato C foi eleito!\n");
		
		else {
			printf("Numero invalido!\n");
			system("pause");
			system("cls");
			goto inicio3;
		}
		}
	}
		
		else if(a>b&&a>=c&&c>b){
			printf("\n\nTeremos um segundo turno!\n\n");
			system("pause");
			n=0;
			a=0;
			c=0;
			br=0;
			system("CLS");
			
			while(n>-1) {
			iniciod:
			printf("Para votar no candidato A, digite 1 e dê Enter.\n\nPara votar no candidato C, digite 3 e dê Enter.\n\nPara votar em Branco, digite 0 e dê Enter.\n\n");
			printf("\nNúmero: ");
			scanf("%d", &n);
			
			if(n==1) {
				a++;
				goto iniciod;
			}
			
			else if(n==3) {
				c++;
				goto iniciod;
			}
			
			else if(n==0) {
				br++;
				goto iniciod;
			}
			
			else if (n>3||n<-1) {
				printf("\nNúmero inválido\n\n");
				goto iniciod;
			}
			
			system("pause");
			system("CLS");
		}
		
		printf("Candidato A: %d\nCandidato C: %d\nVotos brancos: %d\n\n", a, c, br);
		
		if(a>c) 
		printf("O candidato A foi eleito!");
		
		else if(c>a)
		printf("O candidato C foi eleito!");
		
		else {
		inicio4:
		printf("Informe o candidato mais velho\n\nPara escolher o candidato A, digite 1 e dê Enter.\n\nPara escolher o candidato C, digite 2 e dê Enter.\n\n");
		printf("\nNúmero: ");
		scanf("%d", &n);
		system("cls");
			
		if(n==1) 
		printf("\nO candidato A foi eleito!\n");
		
		else if(n==3)
		printf("\nO candidato C foi eleito!\n");
		
		else {
			printf("Numero invalido!\n");
			system("pause");
			system("cls");
			goto inicio4;
		}
		}
	}
		
		else if(b>a&&b>=c&&c>a) {
			printf("\n\nTeremos um segundo turno!\n\n");
			system("pause");
			n=0;
			b=0;
			c=0;
			br=0;
			system("CLS");
			
			while(n>-1) {
			inicioe:
			printf("Para votar no candidato B, digite 2 e dê Enter.\n\nPara votar no candidato C, digite 3 e dê Enter.\n\nPara votar em Branco, digite 0 e dê Enter.\n\n");
			printf("\nNúmero: ");
			scanf("%d", &n);
			
			if(n==2) {
				b++;
				goto inicioe;
			}
			
			else if(n==3) {
				c++;
				goto inicioe;
			}
			
			else if(n==0) {
				br++;
				goto inicioe;
			}
			
			else if (n>3||n<-1) {
				printf("\nNúmero inválido\n");
				goto inicioe;
			}
			
			system("pause");
			system("CLS");
		}
		
			printf("Candidato B: %d\nCandidato C: %d\nVotos brancos: %d\n\n", b, c, br);
			
			if(b>c)
			printf("O candidato B foi eleito!\n\n");
			
			else if(c>b) 
			printf("O candidato C foi eleito!\n\n");
			
			else {
		inicio5:
		printf("Informe o candidato mais velho\n\nPara escolher o candidato B, digite 1 e dê Enter.\n\nPara escolher o candidato C, digite 2 e dê Enter.\n\n");
		printf("\nNúmero: ");
		scanf("%d", &n);
		system("cls");
			
		if(n==2) 
		printf("O candidato B foi eleito!");
		
		else if(n==3)
		printf("O candidato C foi eleito!");
		
		else {
			printf("Numero invalido!\n");
			system("pause");
			system("cls");
			goto inicio5;
		}
		}
		}
		else {
			printf("\n\nTeremos um segundo turno!\n\n");
			system("pause");
			n=0;
			b=0;
			c=0;
			br=0;
			system("CLS");
			
			while(n>-1) {
			iniciof:
			printf("Para votar no candidato B, digite 2 e dê Enter.\n\nPara votar no candidato C, digite 3 e dê Enter.\n\nPara votar em Branco, digite 0 e dê Enter.\n\n");
			printf("\nNúmero: ");
			scanf("%d", &n);
			
			if(n==2) {
				b++;
				goto iniciof;
			}
			
			else if(n==3) {
				c++;
				goto iniciof;
			}
			
			else if(n==0) {
				br++;
				goto iniciof;
			}
			
			else if (n>3||n<-1) {
				printf("\nNúmero inválido\n");
				goto iniciof;
			}
			
			system("pause");
			system("CLS");
		}
		
			printf("Candidato B: %d\nCandidato C: %d\nVotos brancos: %d\n\n", b, c, br);
			
			if(b>c)
			printf("O candidato B foi eleito!\n\n");
			
			else if(c>b)
			printf("O candidato C foi eleito!\n\n");
			
			else {
		inicio6:
		printf("Informe o candidato mais velho\n\nPara escolher o candidato B, digite 1 e dê Enter.\n\nPara escolher o candidato C, digite 2 e dê Enter.\n\n");
		printf("\nNúmero: ");
		scanf("%d", &n);
		system("cls");
			
		if(n==2) 
		printf("\nO candidato B foi eleito!\n");
		
		else if(n==3)
		printf("\nO candidato C foi eleito!\n");
		
		else {
			printf("Numero invalido!\n");
			system("pause");
			system("cls");
			goto inicio6;
		}
		}
		}
	}
	else {
		printf("\nCPF inválido\n\n");
		system("pause");
		system("cls");
		goto inicio;
	}
}
	else {
		printf("\nCPF inválido\n\n");
		system("pause");
		system("cls");
		goto inicio;
	}
}


void eleicao8(){
	setlocale(LC_ALL,"");
	int n=0, cpf, br=0, a=0, b=0, c=0, cpfi[100000], x=0, i, v;
	
	while(n>-1&&n<4) {
	    v=0;
	    printf("Digite seu CPF: ");
	    scanf("%d", &cpf);
	
	    if (cpf>10000&&cpf<1000000) {
	        for(i=0; i<100000; i++) {
		        if(cpfi[i]==cpf) {
		            v=0;
		            break;
		        }
		
		        else
		        v=1;
	        }
	    cpfi[x]=cpf;
        
	    if(v==1) {
	        printf("\nCPF válido.\n\n");		
	        system("pause");
	        system("CLS");
		
	        while(n>-1) {
	            printf("Para votar no candidato A, digite 1 e dê Enter..\n\nPara votar no candidato B, digite 2 e dê Enter..\n\nPara votar no candidato C, digite 3 e dê Enter..\n\nPara votar em Branco, digite 0 e dê Enter..\n\n");
	            printf("\nNúmero: ");
	            scanf("%d", &n);
		
	            if(n==1) {
		            a++;
		            x++;
		            system("pause");
	                system("CLS");
	                break;
				}				
		
		        else if(n==2) {
			        b++;
			        x++;
			        system("pause");
		            system("CLS");
		            break;
		        }
		
		        else if(n==3) {
			        c++;
			        x++;
			        system("pause");
		            system("CLS");
		            break;
		        }
		
		        else if(n==0) {
			        br++;
			        x++;
			        system("pause");
		            system("CLS");
		            break;
		        }
		
		        else if(n>3||n<-1) {
			        printf("\nNúmero inválido\n\n");
		        }
	        }
	    }
	    
		else {
		    printf("\nCPF já utilizado\n\n");
		    system("pause");
		    system("cls");
	    }
        }
    
	    else {
		    printf("\nCPF inválido\n\n");
		    system("pause");
		    system("cls");
	    }
    }
    
	system("cls");

    for(i=0; i<100000; i++) {
		cpfi[i]=0;
		x=0;
	}
	
	printf("Candidato A: %d\nCandidato B: %d\nCandidato C: %d\nVotos brancos: %d", a, b, c, br);
		
	if(a>(a+b+c)/2) 
	printf("\n\nO candidato A foi eleito!\n");
		
	else if(b>(a+b+c)/2) 
	printf("\n\nO candidato B foi eleito!\n");
		
	else if(c>(a+b+c)/2) 
	printf("\n\nO candidato C foi eleito!\n");
	
	else if(a>b&&a>c&&b>c){
	    printf("\n\nTeremos um segundo turno!\n\n");
		n=0;
		a=0;
		b=0;
		br=0;
		system("pause");
		system("CLS");
		
		while(n>-1&&n<3) {
			v=0;
	        printf("Digite seu CPF: ");
	        scanf("%d", &cpf);
	
	        if (cpf>10000&&cpf<1000000) {
	
	            for(i=0; i<100000; i++) {
		            if(cpfi[i]==cpf) {
			            v=0;
		 	            break;
		            }
		
		            else
		            v=1;
	            }
	            
	            cpfi[x]=cpf;
        
		        if(v==1) {
		            printf("\nCPF válido.\n\n");
		            system("pause");
		            system("CLS");
		
		            while(n>-1) {
			            printf("Para votar no candidato A, digite 1 e dê Enter..\n\nPara votar no candidato B, digite 2 e dê Enter..\n\nPara votar em Branco, digite 0 e dê Enter.\n\n");
			            printf("\nNúmero: ");
			            scanf("%d", &n);
			
			            if(n==1){
				            a++;
				            x++;
				            system("pause");
		                    system("CLS");
		                    break;
			            }
			
			            else if(n==2) {
				            b++;
				            x++;
				            system("pause");
		                    system("CLS");
		                    break;
			            }
			
			            else if(n==0) {
				            br++;
				            x++;
				            system("pause");
		                    system("CLS");
		                    break;
			            }  
			
			            else if (n>2||n<-1) {
				            printf("\nNúmero já utilizado\n\n");
				            system("pause");
				            system("CLS");
			            }
		            }
		
		            printf("Candidato A: %d\nCandidato B: %d\nVotos brancos: %d\n\n", a, b, br);
		
		            if(a>b) 
		            printf("O candidato A foi eleito!");
		
		            else if(b>a)
		            printf("O candidato B foi eleito!");
		
		            else {
		                do {
		                    printf("Informe o candidato mais velho\n\nPara escolher o candidato A, digite 1 e dê Enter.\n\nPara escolher o candidato B, digite 2 e dê Enter.\n\n");
		                    printf("\nNúmero: ");
		                    scanf("%d", &n);
		                    system("cls");
			
		                    if(n==1) 
                           	printf("\nO candidato A foi eleito!\n");
		
		                    else if(n==2)
		                    printf("\nO candidato B foi eleito!\n");
		
		                    else {
			                    printf("Numero invalido!\n");
			                    system("pause");
			                    system("cls");
		                    }
	                    } while(n>0&&n<3);
		            }
		        }
		        
				else {
		            printf("\nCPF já utilizado\n\n");
		            system("pause");
               		system("cls");
	            }
            }

            else {
		        printf("\nCPF inválido\n\n");
		        system("pause");
           		system("cls");
	        }
        }
    }

    else if(a>=b&&a>c&&b>c){	
	    printf("\n\nTeremos um segundo turno!\n\n");
		n=0;
		a=0;
		b=0;
		br=0;
		system("pause");
		system("CLS");
			
		while(n>-1&&n<3) {
		    v=0;
	        printf("Digite seu CPF: ");
	        scanf("%d", &cpf);
	
	        if (cpf>10000&&cpf<1000000) {
               	for(i=0; i<100000; i++) {
		            if(cpfi[i]==cpf) {
			            v=0;
			            break;
		            }
		
		            else
		            v=1;
	                }
	                
					cpfi[x]=cpf;
        
		            if(v==1) {
		                printf("\nCPF válido.\n\n");
		                system("pause");
		                system("CLS");
		
		                while(n>-1) {
			                printf("Para votar no candidato A, digite 1 e dê Enter..\n\nPara votar no candidato B, digite 2 e dê Enter..\n\nPara votar em Branco, digite 0 e dê Enter.\n\n");
                    		printf("\nNúmero: ");
			                scanf("%d", &n);
			
			                if(n==1){
				                a++;
				                x++;
				                system("pause");
		                        system("CLS"); 
		                        break;
			                }
			
			                else if(n==2) {
				                b++;
				                x++;
                				system("pause");
		                        system("CLS");
		                        break;
			                }
			
			                else if(n==0) {
				                br++;
				                x++;
				                system("pause");
                  		        system("CLS");
		                        break;
			                    }
			
			                else if (n>2||n<-1) {
				                printf("\nNúmero já utilizado\n\n");
				                system("pause");
				                system("CLS");
			                }
		                }
		
		                printf("Candidato A: %d\nCandidato B: %d\nVotos brancos: %d\n\n", a, b, br);
		
		                if(a>b) 
		                printf("O candidato A foi eleito!");
		
                		else if(b>a)
		                printf("O candidato B foi eleito!");
		
		                else {
		                    do {
		                        printf("Informe o candidato mais velho\n\nPara escolher o candidato A, digite 1 e dê Enter.\n\nPara escolher o candidato B, digite 2 e dê Enter.\n\n");
		                        printf("\nNúmero: ");
		                        scanf("%d", &n);
		                        system("cls");
			
		                        if(n==1) 
		                        printf("\nO candidato A foi eleito!\n");
		
                        		else if(n==2)
		                        printf("\nO candidato B foi eleito!\n");
		
		                        else {
			                        printf("Numero invalido!\n");
			                        system("pause");
			                        system("cls");
		                        }
	                        } while(n>0&&n<3);
		                }
            		}
		            
					else {
		                printf("\nCPF já utilizado\n\n");
		                system("pause");
		                system("cls");
	                    }
                    }
                    
					else {
		                printf("\nCPF inválido\n\n");
		                system("pause");
		                system("cls");
                	}
                }
		    }
		
		    else if(a>b&&a>c&&c>b){
			    printf("\n\nTeremos um segundo turno!\n\n");
			    system("pause");
			    n=0;
			    a=0;
			    c=0;
			    br=0;
			    system("CLS");
			
			    while(n>-1&&n<2||n==3) {
			        v=0;
	                printf("Digite seu CPF: ");
	                scanf("%d", &cpf);
	
	                if (cpf>10000&&cpf<1000000) {
	                    for(i=0; i<100000; i++) {
		                    if(cpfi[i]==cpf) {
			                    v=0;
			                    break;
		                    }
		
		                    else
		                    v=1;
	                    }
	                    
						cpfi[x]=cpf;
        
		                if(v==1) {
		                    printf("\nCPF válido.\n\n");
		                    system("pause");
		                    system("CLS");
		
		                    while(n>-1) {
			                    printf("Para votar no candidato A, digite 1 e dê Enter..\n\nPara votar no candidato C, digite 3 e dê Enter..\n\nPara votar em Branco, digite 0 e dê Enter.\n\n");
			                    printf("\nNúmero: ");
			                    scanf("%d", &n);
			
			                    if(n==1){
				                    a++;
				                    x++;
				                    system("pause");
		                            system("CLS");
		                            break;
			                    }
			
			                    else if(n==3) {
				                    c++;
				                    x++;
				                    system("pause");
		                            system("CLS");
		                            break;
			                    }
			
			                    else if(n==0) {
				                    br++;
				                    x++;
				                    system("pause");
		                            system("CLS");
		                            break;
			                    }
			
			                    else {
				                    printf("\nNúmero já utilizado\n\n");
				                    system("pause");
				                    system("CLS");
			                    }
		                    }
		
		                    printf("Candidato A: %d\nCandidato C: %d\nVotos brancos: %d\n\n", a, c, br);
		
		                    if(a>b) 
		                    printf("O candidato A foi eleito!");
		
		                    else if(b>a)
		                    printf("O candidato C foi eleito!");
		
                    		else {
		                        do {
		                            printf("Informe o candidato mais velho\n\nPara escolher o candidato A, digite 1 e dê Enter.\n\nPara escolher o candidato C, digite 3 e dê Enter.\n\n");
		                            printf("\nNúmero: ");
		                            scanf("%d", &n);
		                            system("cls");
			
                            		if(n==1) 
		                            printf("\nO candidato A foi eleito!\n");
		
		                            else if(n==3)
		                            printf("\nO candidato C foi eleito!\n");
		
		                            else {
			                            printf("Numero invalido!\n");
			                            system("pause");
			                            system("cls");
		                            }
	                            } while(n!=0||n!=1||n!=3);
		                    }
		                }
		
		                else {
		                    printf("\nCPF já utilizado\n\n");
		                    system("pause");
                    		system("cls");
	                    }
                    }
                    
					else {
		                printf("\nCPF inválido\n\n");
		                system("pause");
		                system("cls");
	                    }
                    }
                }
 
                else if(a>b&&a>=c&&c>b){
		            	printf("\n\nTeremos um segundo turno!\n\n");
			            system("pause");
			            n=0;
			            a=0;
			            c=0;
			            br=0;
			            system("CLS");
			
			            while(n>-1&&n<2||n==3) {
			                v=0;
	                        printf("Digite seu CPF: ");
	                        scanf("%d", &cpf);
	
		                    if (cpf>10000&&cpf<1000000) {
	                            for(i=0; i<100000; i++) {
		                            if(cpfi[i]==cpf) {
			                            v=0;
			                            break;
		                            }
		
		                            else
		                            v=1;
	                                }
	                                
									cpfi[x]=cpf;
        
		                            if(v==1) {
		                                printf("\nCPF válido.\n\n");
		                                system("pause");
		                                system("CLS");
		
                            		while(n>-1) {
			                            printf("Para votar no candidato A, digite 1 e dê Enter..\n\nPara votar no candidato C, digite 3 e dê Enter..\n\nPara votar em Branco, digite 0 e dê Enter.\n\n");
			                            printf("\nNúmero: ");
			                            scanf("%d", &n);
			
			                            if(n==1){
				                            a++;
				                            x++;
				                            system("pause");
		                                    system("CLS");
		                                    break;
			                            }
			
			                            else if(n==3) {
				                            c++;
				                            x++;
				                            system("pause");
		                                    system("CLS");
		                                    break;
			                            }
			
			                            else if(n==0) {
				                            br++;
				                            x++;
				                            system("pause");
		                                    system("CLS");
		                                    break;
			                            }
			
			                            else {
				                            printf("\nNúmero já utilizado\n\n");
				                            system("pause");
				                            system("CLS");
			                            }
		                            }
		
		                            printf("Candidato A: %d\nCandidato C: %d\nVotos brancos: %d\n\n", a, c, br);
		
		                            if(a>b) 
		                            printf("O candidato A foi eleito!");
 		
                            		else if(b>a)
		                            printf("O candidato C foi eleito!");
		
		                            else {
		                                do {
		                                    printf("Informe o candidato mais velho\n\nPara escolher o candidato A, digite 1 e dê Enter.\n\nPara escolher o candidato C, digite 3 e dê Enter.\n\n");
		                                    printf("\nNúmero: ");
		                                    scanf("%d", &n);
		                                    system("cls");
					                        
											if(n==1) 
		                                    printf("\nO candidato A foi eleito!\n");
		
		                                    else if(n==3)
		                                    printf("\nO candidato C foi eleito!\n");
		
		                                    else {
			                                    printf("Numero invalido!\n");
			                                    system("pause");
			                                    system("cls");
		                                    }
	                                    } while(n!=0||n!=1||n!=3);
		                            }
		                        }
		                        
								else {
		                            printf("\nCPF já utilizado\n\n");
		                            system("pause");
		                            system("cls");
	                            }
                            }
                            
							else {
		                        printf("\nCPF inválido\n\n");
		                        system("pause");
		                        system("cls");
	                        }
                        }
		            }
		
		            else if(b>a&&b>=c&&c>a) {
			            printf("\n\nTeremos um segundo turno!\n\n");
			            system("pause");
			            n=0;
			            b=0;
			            c=0;
			            br=0;
			            system("CLS");
			
            			while(n>-1&&n<1||n==3||n==2) {
			                v=0;
	                        printf("Digite seu CPF: ");
	                        scanf("%d", &cpf);
 	
                        	if (cpf>10000&&cpf<1000000) {
                            	for(i=0; i<100000; i++) {
		                            if(cpfi[i]==cpf) {
			                            v=0;
			                            break;
		                            }
		
		                            else
		                            v=1;
	                                }
	                                
									cpfi[x]=cpf;
        
		                            if(v==1) {
		                                printf("\nCPF válido.\n\n");
		                                system("pause");
		                                system("CLS");
		
		                                while(n>-1) {
			                                printf("Para votar no candidato B, digite 2 e dê Enter..\n\nPara votar no candidato C, digite 3 e dê Enter..\n\nPara votar em Branco, digite 0 e dê Enter.\n\n");
			                                printf("\nNúmero: ");
			                                scanf("%d", &n);
			
			                                if(n==1){
				                            b++;
				                            x++;
				                            system("pause");
		                                    system("CLS");
		                                    break;
			                                }
			
			                                else if(n==3) {
				                                c++;
				                                x++;
				                                system("pause");
		                                        system("CLS");
		                                        break;
			                                }
 			
                                			else if(n==0) {
				                                br++;
				                                x++;
				                                system("pause");
		                                        system("CLS");
		                                        break; 
			                                }
			
			                                else {
				                                printf("\nNúmero já utilizado\n\n");
				                                system("pause");
				                                system("CLS");
			                                }
		                                }
 		
                                		printf("Candidato B: %d\nCandidato C: %d\nVotos brancos: %d\n\n", b, c, br);
		
		                                if(a>b) 
		                                printf("O candidato B foi eleito!");
		
                                		else if(b>a)
		                                printf("O candidato C foi eleito!");
		
                                		else {
		                                    do {
		                                        printf("Informe o candidato mais velho\n\nPara escolher o candidato B, digite 1 e dê Enter.\n\nPara escolher o candidato C, digite 3 e dê Enter.\n\n");
		                                        printf("\nNúmero: ");
		                                        scanf("%d", &n);
		                                        system("cls");
			
		                                        if(n==1) 
		                                        printf("\nO candidato B foi eleito!\n");
             		
		                                        else if(n==3)
		                                        printf("\nO candidato C foi eleito!\n");
		
		                                        else {
			                                        printf("Numero invalido!\n");
			                                        system("pause");
			                                        system("cls");
		                                        }
	                                        } while(n!=0||n!=2||n!=3);
		                                }
                            		}
		                            
									else {
		                                printf("\nCPF já utilizado\n\n");
		                                system("pause");
		                                system("cls");
	                                }
                                }
                                
								else {
		                            printf("\nCPF inválido\n\n");
		                            system("pause");
		                            system("cls");
	                            }
                            }
			            }
			
			            else {
			                printf("\n\nTeremos um segundo turno!\n\n");
			                system("pause");
			                n=0;
			                b=0;
			                c=0;
			                br=0;
			                system("CLS");
                 			
			                while(n>-1&&n<2||n==3) {
			                v=0;
	                        printf("Digite seu CPF: ");
	                        scanf("%d", &cpf);
	
	                        if (cpf>10000&&cpf<1000000) {
	                            for(i=0; i<100000; i++) {
		                            if(cpfi[i]==cpf) {
			                            v=0;
			                            break;
		                            }
         		
		                            else
		                            v=1;
	                                }
	                                
									cpfi[x]=cpf;
        
		                            if(v==1) {
		                                printf("\nCPF válido.\n\n");
		                                system("pause");
		                                system("CLS");
		
		                                while(n>-1) {
			                                printf("Para votar no candidato A, digite 1 e dê Enter..\n\nPara votar no candidato C, digite 3 e dê Enter..\n\nPara votar em Branco, digite 0 e dê Enter.\n\n");
			                                printf("\nNúmero: ");
			                                scanf("%d", &n);
 			
			                                if(n==1){
				                                a++;
				                                x++;
				                                system("pause");
		                                        system("CLS");
		                                        break;
			                                }
			
			                                else if(n==3) {
				                                c++;
				                                x++;
				                                system("pause");
		                                        system("CLS");
		                                        break;
			                                }
			
			                                else if(n==0) {
				                                br++;
				                                x++;
				                                system("pause");
		                                        system("CLS");
		                                        break;
		                                    } 
			
	                                        else {
		                                        printf("\nNúmero já utilizado\n\n");
				                                system("pause");
				                                system("CLS");
			                                }
		                                }
		
		                                printf("Candidato A: %d\nCandidato C: %d\nVotos brancos: %d\n\n", a, c, br);
		
                                		if(a>b) 
		                                printf("O candidato A foi eleito!");
		
		                                else if(b>a)
		                                printf("O candidato C foi eleito!");
		
                                		else {
		                                    do {
		                                        printf("Informe o candidato mais velho\n\nPara escolher o candidato A, digite 1 e dê Enter.\n\nPara escolher o candidato C, digite 3 e dê Enter.\n\n");
		                                        printf("\nNúmero: ");
		                                        scanf("%d", &n);
		                                        system("cls");
			
		                                        if(n==1) 
		                                        printf("\nO candidato A foi eleito!\n");
		
                                        		else if(n==3)
		                                        printf("\nO candidato C foi eleito!\n");
		
		                                        else {
			                                        printf("Numero invalido!\n");
			                                        system("pause");
			                                        system("cls");
		                                        }
	                                        } while(n!=0||n!=1||n!=3);
		                                }
		                            }
		                            
									else {
		                                printf("\nCPF já utilizado\n\n");
		                                system("pause");
		                                system("cls");
	                                }
                                }
                                
								else {
		                            printf("\nCPF inválido\n\n");
		                            system("pause");
		                            system("cls");
	                            }
                            }
			            }
}

void enigma() {
	char lc[100]="lel", sc[100]="lal", l[100], s[100];
	int me=1000000, ma=0, p=0, im=0, i=0, j, x[1000];
	
	system("cls");
	
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
}

void funcaot() {
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

void conversor() {
	long int x, a=0, m=0, d=0;
	
	printf("Digite uma quantidade de dias: ");
	scanf("%d", &x);
	
	a=x/365;
	m=(x%365)/30;
	d=(x%365)%30;
	
	printf("Ano(s): %d\nMes(es): %d\nDia(s): %d", a, m, d);
}
