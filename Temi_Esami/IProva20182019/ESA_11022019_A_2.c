#include <stdio.h>

int prime(int val){
	for (int i = 2; i<val; i++){
		if (val % i == 0){
			return 0;
		}
	}
	return 1;
}

int rightprime(int val){
	while (val > 0){
		int primo = prime(val);
		if(primo){
			val /= 10;
		}
		else{
			return 0;
		}
	}
	return 1;
}


int main(){
	int n, r;
	
	printf("\nInserisci un intero positivo\n");
	do{
		scanf("%d",&n);
	}while(n<=0);

	r=rightprime(n);
	
	
	
	printf("\nEsito su %d: %d\n",n,r);
	
	return 0;
}
