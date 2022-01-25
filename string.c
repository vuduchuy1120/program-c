#include<stdio.h>
#include<string.h>

void swap(char s[], char str[], int n){
	char tmp[n];
	strcpy(tmp,s);
	strcpy(s,str);
	strcpy(str,tmp);
}
main(){
	int i,j ;
	char s[6][31];
	char c[31];
	for(i = 0 ; i < 5 ; i++){
		scanf("%s%*c", s[i]);
	}
	for(i = 0 ; i < 4 ; i++){
		for(j =i+1 ; j < 5 ; j++)
			if(strcmp(s[i], s[j]) > 0){
				swap(s[i],s[j],31);
			}
	}	
	for(i = 0 ; i < 5 ; i++){
		printf("%s ", s[i]);
	}
}
