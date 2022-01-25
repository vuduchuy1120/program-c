#include<stdio.h>
#include<string.h>
#include<ctype.h>

int  main(){
	char a[1000];
	gets(a);
	strlwr(a);
	char c[20][50];
	int n = 0;
	char *token = strtok(a," ");
	while(token != NULL){
		strcpy(c[n], token);
		++n;
		token = strtok(NULL, " ");
	}
	int i,j , max = 0, id;
	for(i = 0 ; i < n ; i++){
		int count = 1;
		for(j = i + 1 ; j < n; j++){
			if(strcmp(c[i], c[j]) == 0){
				count++;
			}
		}
		if(count > max){
			max = count;
			id = i;
		}
		else if(count = max){
			if(strcmp(c[id], c[i]) > 0) id = i;
			
		}
	}

	printf("%s %d\n", c[id], max);
	
}
