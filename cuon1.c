/*

*/

#include<stdio.h>
main(){
	int a, b, i;
	scanf("%d%d", &a, &b);

	printf("[%d -> %d]\n", a,b);
	for(i = a ; i <=b ; i++){
		printf("%d ", i);
	}
}
