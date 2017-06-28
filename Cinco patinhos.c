#include <stdio.h>
#include <stdlib.h>

int main() {
	int p, i;
	printf("Quantos patinhos foram passear: ");
	scanf("%d", &p);
	
	for(i=p; i>=2; i--) {
		printf("\n%d patinhos foram passear\nalem das montanhas para brincar\na mamae gritou quack quack quack\n mas so %d patinhos voltaram de la\n", i, i-1);
}
    if(p>8000)
	printf("\n1 patinhos foi passear\nalem das montanhas para brincar\na mamae gritou quack quack quack\nmas nenhum patinho voltou de la\n\na mamae patinha foi procurar\nalem das montanhas\nna beira do mar\na mamãe gritou: quack, quack, quack, quack\ne os MAIS DE 8000(%d) patinhos voltaram de la\n", p);
	
    else 
	printf("\n1 patinhos foi passear\nalem das montanhas para brincar\na mamae gritou quack quack quack\nmas nenhum patinho voltou de la\n\na mamae patinha foi procurar\nalem das montanhas\nna beira do mar\na mamãe gritou: quack, quack, quack, quack\nE os %d patinhos voltaram de la\n", p);
}
