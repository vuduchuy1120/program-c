#include<stdio.h>

int main(){
	int n, i;
	scanf("%d", &n);
	
	long int a[n];
	int id1, id2;
	for(i = 0 ; i < n; i++){
		scanf("%ld", &a[i]);
	}
	// in ra chi so cuoi thi a[i]<= min
	for(i = 0 ; i< n ; i++){
		if(i ==0 && a[i]*a[i+1] < 0 ){
			printf("%ld ", a[i]);
		}
		else if(i == n-1 && a[i]*a[i-1] < 0){
			printf("%ld ", a[i]);	
		}
		else if(a[i]*a[i-1] < 0){
			printf("%ld ", a[i]);	
		}
	}

}
