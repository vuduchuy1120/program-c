#include<stdio.h>

int main(){
	int n, i;
	scanf("%d", &n);
	
	long int a[n];
	long int max = -1e9 -1 , min = 1e9 + 1;
	
	for(i = 0 ; i < n; i++){
		scanf("%ld", &a[i]);
	}
	for(i = 0 ; i< n ; i++){
		if(a[i] < min){
			min = a[i];
		}
		if(a[i] > max){
			max = a[i];
		}
	}
	printf("%ld %ld", max , min);
}
