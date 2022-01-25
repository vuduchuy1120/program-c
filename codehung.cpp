#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
 
void read(double *n, double *k) {
    while (scanf("%lf %lf", &*n, &*k) != -1) { 
        if (*n != int(*n) || *k != int(*k))
            printf("The data you entered is not an integer. Please try again!");
        else if (*n < 0 || *k < 0)
            printf("The data you entered is not a positive number. Please try again!");
        else if (*n > 50 || *k > 50)
            printf("The number you entered is out of the range [0, 50]. Please try again!");
        else if (*n < *k)
            printf("n must be greater than or equal to k. Please try again!");
        printf("\n");
    }
}
 

int C(int n, int k)
{
    if (k > n)
        return 0;
    if (k == 0 || k == n)
        return 1;
    return C(n - 1, k - 1)+ C(n - 1, k);
}




int main() {
    double n, k;
    printf("Enter n, k :");
    read(&n, &k);
    int x = (int)n;
    int y = (int)k;
	printf("THe result %d", C(x, y));
    return 0;
}

