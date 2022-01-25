#include<stdio.h>

int main(){
	int n, i;
	scanf("%d", &n);
	
	long int a[n];
	long int max = -1e9 -1 , min = 1e9 + 1;
	int id1, id2;
	
	for(i = 0 ; i < n; i++){
		scanf("%ld", &a[i]);
	}
	// in ra chi so cuoi thi a[i]<= min
	for(i = 0 ; i< n ; i++){
		if(a[i] < min){
			min = a[i];
			id1 = i;	
		}
		if(a[i] > max){
			max = a[i];
			id2 = i;
		}
	}
	printf("%d %d", id1 , id2);
}
