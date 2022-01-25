#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int check(char s[]){
	int i;
	int count = 0;
	for(i = 0 ; i < strlen(s) ; i++){
		if(s[i] == 'a' || s[i] == 'e' ||s[i] == 'i'|| s[i] == 'o' || s[i] == 'u'){
			count++;
		}
	}
	if (count >= 1 && count <= 2)
		return 1;
	else
		return 0;
}

int main(){
	char c[1000];
	gets(c);
	int i,j = 0;
	char d[1000];
	strcpy(d,c);
	char *token = strtok(c, " ");
	while(token != NULL){
		if(check(token) == 1){
//			printf("%s ", token);
			j++;
		}
		token = strtok (NULL, " ");
	}
	printf("%d\n", j);
	char* toke = strtok(d, " ");
	while(toke != NULL){
		if(check(toke)==1)
			printf("%s ", toke);
		toke = strtok (NULL, " ");
	}
}
