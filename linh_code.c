#include<stdio.h>
#include<math.h>

int isPrime(int n){
	int i;
	if(n < 2)
		return 0;
	for ( i = 2 ; i <= sqrt(n) ; i++){
		if(n % i == 0)
			return 0;
	}
	return 1;
}

void printDiv(int n){
	int i;
	for(i = 1 ; i <= sqrt(n) ; i++){
		if(n % i == 0){
			printf("%d ", i);
			if( n / i != i){
				printf("%d ", n/i);
			}
		}
	}
}
int main(){
	printDiv(10);
	
	return 0;
}
