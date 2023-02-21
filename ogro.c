#include <stdio.h>
#include <stdlib.h>

int main(){
	int n,i;
	scanf("%d", &n);
	
	if(n<=5){
		for(i=0;i<n;i++){
			printf("I");
		}
		printf("\n");
		printf("*");
	}else{
		for(i=0;i<5;i++){
			printf("I");
		}
		printf("\n");
		for(i=0;i<(n-5);i++){
			printf("I");
		}
	}
	
	return 0;
}
