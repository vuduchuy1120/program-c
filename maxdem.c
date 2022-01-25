#include<stdio.h>

main(){
	
	int a[100];
	int n, i, j ;
	scanf("%d", &n);
	for(i = 0; i< n; i++){
		scanf("%d", &a[i]);
	}
	int  maxdem = 1;
	int dem = 1;
	for(i = n-1 , j = i -1 ; j >= 0; j--, i--){
		if(a[i] >= a[j]){
			dem++;
			if(maxdem < dem){
				maxdem = dem;
			}
		}
		else {
			if(maxdem < dem)
				maxdem = dem;
				dem = 1;
		}
	}
	printf("%d ", maxdem);

}
