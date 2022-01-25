#include<stdio.h>

int main(){
	double a, b;
	char o;
	double result;
	scanf("%lf%c%lf" &a, &o, &b);
	switch(o){
		case '+': 
			result = a + b;
			printf("%lf",result);
			break;
		case '-' :
			result = a - b;
			printf("%lf",result);
			break;
		case '*' :
			result = a * b;
			printf("%lf",result);
			break;
		case '/' :
			if(b == 0) print("Divide by 0 ");
			else{
				result = a / b;
				printf("%lf",result);
			}
		break;
	default: print("Op is not supported");					
	}
	return 0;
}
