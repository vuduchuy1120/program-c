#include<stdio.h>
#include<math.h>

main(){
	float a,b,c;
	scanf("%f%f%f", &a, &b, &c);
	if(a == 0){
		if(b == 0){
			if(c == 0)	printf("Many solution");
			else printf("No solution");
		}
		else printf("Only solution x = %.2f", -c/b );
	}
	else{
		float denta = b*b - 4 *a*c;
		if(denta > 0)
			printf("x1 = %.2f , x2 = %.2f", (-b - sqrt(denta))/2*a,(-b + sqrt(denta))/2*a);
		else if( denta == 0)
			printf("x1 = x2 = %.2f", -b/(2*a));
		else
			printf("No solution");;;;;;;
			
	}
}
