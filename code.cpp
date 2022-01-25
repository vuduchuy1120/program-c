
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
    printf("Press any key to continue.\n");
    getchar();

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

	printf("Sum of odd numbers: 1 + 3 + ... + %d = %d\n", n, S1);
	printf("Press any key to continue.\n");
	getch();
    printf("Factorial of n: %d! = %d\n", n, S);
    printf("Press any key to continue.\n");
    getch();
    printf ("Sum of 1 + 1/2 + 1/3 + ... + 1/%d = %f", n, S2);
    printf("Press any key to continue.\n");
    getch();
	return 0;
}
