#include<stdio.h>

main(){
	char a[100];
	char dd[256] = {0};
	int n, i;
	scanf("%d%*c", &n);
	for(i= 0; i<n; i++){
		scanf("%c%*c", &a[i]);
		dd[a[i]]++;
	}
	int res1 = 0;
	int res2 = 0;
	char kt1, kt2;
	for(i = 0 ; i< 256 ; i++){
		if(dd[i]){
			if( dd[i] > res1){
				res2 = res1;
				res1 = dd[i];
				kt1 = (char)(i);
			}
			else if(dd[i] > res2 ){
				res2 = dd[i];
				kt2 = (char)(i);
			}
		}
	}
	printf("%c ",kt1);
	for(i = 0 ; i< 256 ; i++){
		if(dd[i] == res2){
			printf("%c", (char)(i));
			break;
		}
		
	}
	
	
	
}
