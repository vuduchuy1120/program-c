
#include <stdio.h>
#include <stdlib.h>

//Pham Thi Ngoc Mai - HE163252 - Part 2

int main()
{
    int n;
	printf("Input integer odd number n: ");
	scanf ("%d", &n);
    //Input odd number
	while (n % 2 != 1)
	{
	    printf("n is NOT an odd number\nPlease re-enter an odd number: ");
	    scanf("%d", &n);
	}
	printf ("Odd number: %d\n", n);

	int S1 = 0;
	int S = 1;
	float S2 = 0;
	int i = 1;
	float j = 1;

	while (i <= n && j <= n)
    {
        if (i % 2 == 1) {S1 += i;}      // Sum of odd numbers
        S *= i;                         // Factorial of n
        S2 += 1/j;                      // Sum of 1/n
        i++;
        j++;
    }
    printf("Sum of ");
    for( i = 1 ; i <= n; ++i){
    	if(i == 1 ) printf("1");
    	else if (i <= 3 || i == n) printf("1/%d",i);
    	else if(n >= 4) {
			printf("...");
			while( i + 1 < n ) i++;
		}
		if (i != n) printf(" + "); 
	}
	printf(" = %f",S2);
	return 0;
}
