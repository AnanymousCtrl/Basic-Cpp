#include<stdio.h>

int main(){
	int n, m, i, a[50], b[50];
	printf("Enter greater number: \n");
	scanf("%d", &n);
	printf("Enter smaller number: \n");
	scanf("%d", &m);
	
	printf("\nFactors are: \n");
	for(i=1;i<=m;i++){
		if(n%i==0 && m%i==0){
			printf(" %d",i);
		}
	}

	return 0;
}
