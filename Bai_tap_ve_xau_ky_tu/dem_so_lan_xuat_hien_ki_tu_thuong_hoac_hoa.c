#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main(){
	char c[1005];
	int cnt[26] = {0};
	scanf("%s", c);
	int i;
	for(i = 0 ; i <strlen(c) ; i++){
		cnt[c[i] - 'a']++;
	}	
	for(i = 0 ; i < 26; i++){
		if(cnt[i] != 0)
			printf("%c %d\n", (i +'a'), cnt[i]);
	}
}
