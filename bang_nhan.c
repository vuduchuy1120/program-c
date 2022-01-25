#include<stdio.h>
#include<stdlib.h>
int dem(int a){
	int d =0;
	while(a){
		a /= 10;
		d++;
	}
	return d;
}
int main(){
	int i, j, s, e;
	
	scanf("%d %d", &s, &e);
	int count1 = dem(e);
	int count2 = dem(e*e);
		printf("%*s", count1, " ");
		for( j = s ; j <= e ; j++ ){
				printf("%*d", count2+1 ,j);
		}
		printf("\n");
		for(i = s ; i <= e ; i++){
			printf("%*d",count1, i);
			for(j = s ; j <= e; j++){
					printf("%*d", count2+1, i*j);
			}
			printf("\n");
		}
		
}

