#include<stdio.h>
#include<math.h>
int isPerfect(int n){
	int c1 = 0 , c9 = 0;
	while(n > 0){
		int a = n % 10;
		if (a == 1 ) c1 = 1;
		if (a == 9) c9 = 1;
		n /= 10;
	}
	return c1&&c9 ;
}

int main(){
	int n, i;
	scanf("%d", &n);
	int OK = 0;
	long int a[n];
	for(i = 0 ; i < n; i++){
		scanf("%ld", &a[i]);
	}
	for(i = 0 ; i< n ; i++){
		if(isPerfect(a[i])){
			printf("%ld ",a[i]);
			OK = 1;
		}	
	}
	if(!OK)
		printf("-1");
}
