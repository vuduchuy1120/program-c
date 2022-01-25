#include<stdio.h>

int main(){
	int a[100];
	int i, j, n;
	int start, end;
	int dem = 0;
	int max = 0;
	scanf("%d", &n);
	for(i = 0 ; i <n ; i++){
		scanf("%d", &a[i]);
	}
	
	for(i = 0; i < n ; i++){
		if(a[i] == 0 ){
			for( j = i ; a[j] == 0 && j < n ;j++ ){
				dem++;
			}
			if(max < dem){
				max = dem;
				start = i;
				end = j - 1;
				dem = 0;
				i = j - 1;
			}
			else{
				dem = 0;
				i = j;
			}
		}
		
	}
	printf("%d %d %d", max , start, end);
}



