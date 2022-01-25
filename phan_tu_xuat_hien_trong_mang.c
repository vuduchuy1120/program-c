#include<stdio.h>

//8
//5 9 6 5 7 1 3 6 
//1 1 1 1 1 1 1 1   b[]
//2 1 2 0 1 1 1 0   c[]

int main(){
	char a[100];
	int b[100] = {1}, c[100] = {0};
	int n;
	int i,j;
	
	scanf("%d%*c", &n);
	
	for(i = 0 ; i <n ; i++){
		scanf("%c%*c", &a[i]);
		b[i] = 1;
		c[i] = 0;
	}
	
	for(i = 0 ; i <n ; i++){
		printf("%c ", a[i]);
	}
	printf("\n");
	for(i = 0; i <n ; i++){
		if(b[i] == 1){
			b[i] = 0;		
			for(j = i  ; j < n ; j++){
				if(a[j] == a[i]){
					c[i]++;
					b[j] = 0;
				}

			}
		}
	}
	
	for( i = 0 ; i <n; i++){
		printf("%d ", c[i]);
	}
	
}
