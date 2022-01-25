#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
//aaabdcdac... cnt[0] = 4
int main(){
	int n;
	int i;
	scanf("%d", &n);
	char c[n];
	int cnt[256] = {0};
	for(i = 0 ; i < n; i++){
		scanf("%c%*c", &c[i]);
	}

	for(i = 0 ; i <n; i++){
		if(c[i] )
		cnt[c[i] - 'a']++;
	}
	int res1 = 0 , res2 = 0;
	char kt;
	for(i = 0 ; i < 256 ; i++){
		if(cnt[i]){
			if(cnt[i] >= res1){
				res1 = cnt[i];
				kt = (char)i;
			}
		}
	}	
	printf("%c",kt);
//	for(i = 0 ; i < 26; i++){
//		if(cnt[i] != 0)
//			printf("%c %d\n", (i +'a'), cnt[i]);
//	}

	
	
}
