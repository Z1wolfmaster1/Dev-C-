#include <stdio.h>

int main() {
int x[47], n, iaa, i, j, ia, s;
	
	do {
		s=0;
		scanf("%d", &n);
		if(n==0)
		break;
		
		x[0]=0;
		x[1]=1;
		for(i=2; i<48; i++) {
			ia=i-1;
			iaa=i-2;
			x[i]=x[iaa]+x[ia];
		}
		
		for(j=0; j<n; j++) {
			printf("%d ", x[j]);
		}
		printf("\n");
	} while(n!=0);
}
