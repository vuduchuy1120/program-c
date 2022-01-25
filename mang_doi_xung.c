#include <stdio.h>
#include <math.h>

int isParallel(long int a[] , int n){
	int i, j;
	for( i = 0 , j = n-1 ; i< j ; i++, j--){
		if(a[i] != a[j])
			return 0;
	}
	return 1;
}
int main(){
	int n, i;
	scanf("%d", &n);
	long int a[n];
	for(i = 0 ; i< n; i++){
		scanf("%ld", &a[i]);
	}
	if(isParallel(a, n))
		printf("YES");
	else
		printf("NO");
	
}
