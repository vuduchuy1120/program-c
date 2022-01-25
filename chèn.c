#include<stdio.h>


void insertionSort(int a[], int n){
    int j, x, i;
    for( i=1;i<n;i++){
         x=a[i];
         j=i;
        while(j>0 && x<a[j-1]){
            a[j]=a[j-1];
            j--;
        }
        a[j]=x;
    }
}

main(){
	int a[100];
	int n, i;
	scanf("%d", &n);
	for(i = 0 ; i < n ; i++){
		scanf("%d", &a[i]);
		insertionSort(a[100], n);
	}
	for(i = 0 ; i < n ; i++){
		printf("%d ", a[i]);
	}
	
}
