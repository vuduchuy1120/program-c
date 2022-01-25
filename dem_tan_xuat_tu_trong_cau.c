#include<stdio.h>
#include<string.h>
#include<ctype.h>

int  main(){
	char a[1000];
	gets(a);
	strlwr(a);
	char c[20][50];
	int b[100];
	int n = 0;
	char *token = strtok(a," ");
	while(token != NULL){
		strcpy(c[n], token);
		++n;
		b[n] = 0;
		token = strtok(NULL, " ");
	}
	int i,j ;
	for(i = 0 ; i < n ; i++){
		if(b[i] == 0){
			int count = 1;
			for(j = i + 1 ; j < n; j++){
				if(strcmp(c[i], c[j]) == 0){
					count++;
					b[j] = 1;
				}
			}
			printf("%s %d\n", c[i], count);
		}
	}
	
}
