#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, j, k, l, c=0;
	char x[]="roma";
	
	for(i=0; i<4; i++) {
		for(j=0; j<4; j++) {
			for(k=0; k<4; k++) {
				for(l=0; l<4; l++) {
					if(l!=i&&l!=j&&l!=k){
					printf("%c", x[l]);
					
					c++;
					
					if(c>3){
						printf("\n");
						c=0;
					}
					
					}
				}
			}			
		}
	}
}

