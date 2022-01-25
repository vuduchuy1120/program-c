#include<stdio.h>

int main(){
	int n, m, j, i;
	scanf("%d%d", &n,&m);
	long long f1 = 1, f2 = 1, fibo = f1 + f2;
	while(1){
		if(fibo >= n && fibo <= m) printf("%lld ", fibo);
		if(fibo > m) break;
		f1 = f2;
		f2 = fibo;
		fibo = f2 +f1; 
	}
}
