#include<stdio.h>
#include<math.h>
int isPrime(int n){
	if (n < 2)
		return 0;
	int i;
	for(i = 2 ; i <= sqrt(n); i++){
		if(n % i == 0)
			return 0;
	}
	return 1;
}

int main(){
	int n, i;
	scanf("%d", &n);
	
	long int a[n];
	for(i = 0 ; i < n; i++){
		scanf("%ld", &a[i]);
	}
	for(i = 0 ; i< n ; i++){
		if(isPrime(a[i])){
			printf("%ld ",a[i]);
		}	
	}
}
