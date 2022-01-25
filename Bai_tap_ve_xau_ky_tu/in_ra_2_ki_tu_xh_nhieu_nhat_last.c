#include<stdio.h>

main(){
	int n;
	scanf("%d%*c", &n);
	char a[n];
	char dd[255]= {0};
	char arr[255]= {0};
	int i,j ;
	for(i = 0 ; i < n ; i++){
		scanf("%c%*c", &a[i]);
		dd[a[i]]++;
	}
	for( i = 0 ; i < 256 ; i++){
		arr[i] = i;
	}
	for(i = 0 ; i < 255 ; i++){
		if( dd[i] != 0){
			for(j = i + 1; j< 256 ;  j++){
				if(dd[j] != 0){
					if(dd[i] < dd[j] ){
						int tmp = dd[i];
						dd[i] = dd[j];
						dd[j] = tmp;
						tmp = arr[i];
						arr[i] = arr[j];
						arr[j] = tmp;
					}
				}
			}
		}
	}
	int check;
	for( i = 0, j = 0 ; j < 2 && i < 256 ; i++ ){
		if(dd[i] != 0){
			printf("%c ", (char)arr[i]);
			check = arr[i];
			j++;
		}
	}
	if( j == 1 )
		printf("%c", (char)check);
}
