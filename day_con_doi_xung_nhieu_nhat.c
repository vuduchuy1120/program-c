#include<stdio.h>

int isParallel(int i, int j, int a[]){
	int k;
	for(k = i; k <= (j+i) / 2;k++){
		if(a[k] != a[j - k + i] )
			return 0;
	}
	return 1;
}
int main(){
	int a[100];
	int n, i, j, max = 1 , start;
	scanf("%d", &n);
	for(i = 0 ; i < n; i++){
		scanf("%d", &a[i]);
	}
	for(i = 0 ; i < n ; i++){
		for(j = n - 1; j >= 0 ; j--){ // i = 3 j = 9 
			if(isParallel(i,j,a)){
				if(max < j - i +1){
					max = j - i + 1;
					start = i;
				}
			}
			break;
		}
	}
	if(max == 1)
		return 0;
	else
		for( i = start; i < start + max ; i++ ){
			printf("%d ", a[i]);
		}
	
	return 0;
}
