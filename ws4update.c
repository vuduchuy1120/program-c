#include<stdio.h>

void get_input(int *n,int *k){
	char c, ch;
	keep_doing = 1;
	do{
		printf("Enter n, k : ");
		scanf("%d %d %c", n, k, &c);
		if(c != '\n'){
			printf("The data you entered is not an integer. Please enter again\n\n");
			do{
				scanf("%c", &ch);
			}
			while(ch != '\n');
		}
		else if( *n < 0 || *k < 0)
			printf("The date you entered is not positive number. Please enter again\n\n");
		else if ( *n > 50 || *k > 50)
			printf("The number you enterd is out of the range [0 ,50]. Please enter again\n\n");
		else if (*n < *k)
			printf("n must be greater than or equal to k. Please enter again\n\n");
		else 
			keep_doing = 0;
	}
	while(keep_doing)
}


