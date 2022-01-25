#include<stdio.h>

int fact(int n){
	int i;
	int s = 1;
	for(i = 2 ; i <= n; i++){
		s *= i;
	}	
	return s;
}

int main(){
	double a;
	int i = 1;
	float s = 0 ;
	do{
		scanf("%lf", &a);
	}
	while(a <= 0 || a >=1);
	do{
			s += (double)1/fact(i);
			i++;
	}
	while((float)1/fact(i) >= a);
	printf("%f", s);
}
