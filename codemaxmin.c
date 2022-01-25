#include<stdio.h>

void clear(void){
	while (getchar() != '\n');
}
double get_double( double min, double max){
	double value, keepdoing = 1 , rc;
	char after;
	do{
		printf("Enter a whole number in the range [%.2lf, %.2lf] : ", min, max);
		rc = scanf("%lf%c", &value, &after);
		if(rc == 0){
			printf("The data your entered is illegal. Please try again!\n\n");
			clear();
		}
		else if(after != '\n'){
			printf("The data your entered is illegal. Please try again!\n\n");
			clear();
		}
		else if (value < min || value > max){
			printf ("Out of range. Please try again!\n\n");
		}
		else
			keepdoing = 0;
	}
	while(keepdoing == 1);
	return value ;
}


int main(){
	double max, min;
	scanf("%lf %lf", &min, &max);
	get_double(min, max);
}
