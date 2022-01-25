#include<stdio.h>
#include<math.h>

int check(int n){
	int x = 0;
	int a = abs(n);
	if(n % 3 != 0)
		return x;
	do{
		if( a % 3 == 0){
			x++ ;
			a = a /3;	
		}
		if(a % 3 != 0 && a != 1){
			x = 0;
			return x;
		}
	}
	while(a > 1 );
		return x;
}

main(){
	int n;
	scanf("%d", &n);
	int x = check(n);
	if(x == 0)
		printf("%d is not a power of 3", n);
	else
		printf("%d ", x);
	
	
}
