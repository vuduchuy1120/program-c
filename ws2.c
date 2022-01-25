#include<stdio.h>
#include<math.h>

int isPrime(int n){
	int i;
	if(n < 2)
		return 0; // 0 laf sai 1 la dung
	for(i = 2 ; i <= sqrt(n); i++){
		if(n % i == 0 )
			return 0;
	}
	return 1;
}

int printSub(int n){
	int i, count = 0, sum = 0;
	for(i = 1 ; i <= sqrt(n); i++){ 
		if(n % i == 0){
			printf("%d ", i);
			count++;
			sum += i;
			if( n / i != i){
				printf("%d ", n/i);
				count++;
				sum += (n/i);
			}
		}
	}
	printf("\nSo uoc cua n: %d ", count);
	printf("\nTong cac uoc cua n: %d", sum);
}

int main(){
	int n;
	scanf("%d", &n);
	
	if(isPrime(n) == 1)
		printf("%d is prime number", n);
	else
		printSub(n);
	return 0;	
}
