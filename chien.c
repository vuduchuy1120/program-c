#include <stdio.h>

int check(float a, float b, float c)
{
    if (a + b > c && b + c > a && c + a > b)
        return 1;
    printf ("Not valid! Try again. \n\n");    
    return 0;
}
    

void Input(float *a1, float *b1, float *c1,float *a2, float *b2, float *c2, float *a3, float *b3, float *c3 ){
	printf ("Enter (a1, b1, c1): \n");
	scanf ("%f%f%f", a1, b1, c1);
	printf ("Enter (a2, b2, c2): \n");
	scanf ("%f%f%f", a2, b2, c2);
	printf ("Enter (a3, b3, c3): \n");
	scanf ("%f%f%f", a3, b3, c3);
}

void caculate(float a1, float b1, float c1,float a2, float b2, float c2, float a3, float b3, float c3, float *area ){
	*area = a1*b1*c1;
}
int main() {
	float a1, b1, c1, a2, b2, c2, a3, b3, c3, area, max;
	float a,b,c;
	Input(&a1, &b1, &c1, &a2, &b2, &c2, &a3, &b3, &c3);
	check(a,b,c);
}
	
