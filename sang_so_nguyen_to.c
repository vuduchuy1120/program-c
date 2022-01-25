#include<stdio.h>
#include<math.h>

int prime[1000001];

void sieve(){
	int i, j;
	for(i = 0 ; i <= 1000000; i++){
		prime[i] = 1;
	}
	prime[0] = prime[1] = 0;
	for( i = 2 ; i <= 1000; i++){
		if(prime[i]){
			for(j = i*i ; j < 1000001 ; j+=i)
				prime[j] = 0;
		}
	}
}
int main(){
	sieve();
	int n, i;
	scanf("%d", &n);
	for(i = 0 ; i <= n ; i++){
		if(prime[i])
			printf("%d ", i);
	}
	return 0;
}
