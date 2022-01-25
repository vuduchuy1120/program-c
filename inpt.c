#include<stdio.h>

main(){
	int a[100], b[100];
	int i, j, n , c, count =0 ;
	scanf("%d %d", &n , &c);
	
	for(i = 0 , j = 0; i < n ; i++){
		scanf("%d", &a[i]);
		if(a[i] % c == 0){
			b[j]= a[i];
			j++;
			count++;
		}
	}
	for(j = 0 ; j < count ; j++){
		printf("%d ", b[j]);
	}
	
	
}
