#include<stdio.h>
#include<math.h>

int check(int n){
	int x = 0;
	int a = abs(n);
	if(n % 2 != 0)
		return x;
	do{
		if( a % 2 == 0){
			x++ ;
			a = a /2;	
		}
		if(a % 2 != 0 && a != 1){
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
		printf("0");
	else
		printf("%d ", x);
	
	
}
