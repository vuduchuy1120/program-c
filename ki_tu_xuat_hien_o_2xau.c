#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main(){
	char c1[1005], c2[1005];
	int cnt[256] = {0};
	gets(c1);
	gets(c2);
	int i;
	for(i = 0 ; i <strlen(c1) ; i++){
		cnt[c1[i]] = 1;
	}	
	for(i = 0 ; i < strlen(c2); i++){
		if(cnt[c2[i]])
			cnt[c2[i]] = 2;
	}
	for(i = 0 ; i < 256 ; i++){
		if(cnt[i] == 2)
			printf("%c", i);
	}
}
