#include<stdio.h>

int main(){
	int n, i;
	scanf("%d", &n);
	
	long int a[n];
	int chan = 	0, le = 0;
	for(i = 0 ; i < n; i++){
		scanf("%ld", &a[i]);
	}
	for(i = 0 ; i< n ; i++){
		if(a[i] % 2 == 0)
			chan++;
		else
			le++;
	}
	printf("%d %d", chan , le);
}
