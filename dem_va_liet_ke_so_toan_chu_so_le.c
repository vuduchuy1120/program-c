#include<stdio.h>
#include<math.h>

int isOdd(int n){
	if(n %2 == 0)
		return 0;
	while(n > 0){
		int a = n % 10;
		if(a % 2 == 0)
			return 0;
		n /= 10;
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
		if(isOdd(a[i])){
			printf("%ld ",a[i]);
		}	
	}
}
