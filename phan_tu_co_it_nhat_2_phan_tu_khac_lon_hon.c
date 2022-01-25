#include<stdio.h>

int main(){
	int n, i;
	scanf("%d", &n);
	
	long int a[n];
	long int max1 = -1e9 -1 , max2 = -1e9 - 1;
	int id1, id2;
	for(i = 0 ; i < n; i++){
		scanf("%ld", &a[i]);
	}
	// in ra chi so cuoi thi a[i]<= min
	for(i = 0 ; i< n ; i++){
		if(a[i] > max1){
			max2 = max1;
			max1 = a[i];	
		}
		else if(a[i]>max2){
			max2 = a[i];	
		}
	}
	for(i = 0 ; i <n ; i++){
		if(a[i] < max2)
			printf("%ld ", a[i]);
	}

}
