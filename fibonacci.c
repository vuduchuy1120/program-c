#include <stdio.h>

int main() {
    long long n, m;
    scanf("%lld %lld", &n, &m);   
    long long f1 = 0, f2 = 1, fibo;
    int count = 0;
    if (n == 0) {
		printf("0 ");
		count++;
	}
    if (n <= 1 && m >= 1 ){ 
		printf("1 ");
		count++;
	}
    while (1) {
        fibo = f1 + f2;
        if (fibo > m) break;
        if (fibo >= n) {
			printf("%lld ", fibo);
			count++;
		}
        f1 = f2, f2 = fibo;
    }
    printf("\n So so fibonacci trong khoang %d - %d: %d" , n,m,count);
    return 0;
}
