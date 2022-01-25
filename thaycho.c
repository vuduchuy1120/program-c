#include<stdio.h>

main(){
	int a = 3;
	int *p = &*&a;
	printf("%x ", *&a);
	printf("%x ", *p);
	*p = *p * *&*p*2; // 3 * 6
	printf("%d ", a);
}
