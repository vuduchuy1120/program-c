#include<stdio.h>

int UCLN(int a, int b){
	if(b == 0)
		return a;
	return UCLN(b, a%b);
}
