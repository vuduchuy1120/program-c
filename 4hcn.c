#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float a, b, c, e, d, f, g, h, i , j, k , l;
    scanf("%f%f%f\n%f%f%f\n%f%f%f\n%f%f%f",&a, &b, &c, &e, &d, &f, &g, &h, &i , &j, &k , &l);
    float S1 = a*b*c, S2 = e*d*f, S3 = g*h*i, S4 = j*k*l;
    float max, max1, max2;
    max1 = S1;
    max2 = S3;
    if(S1 < S2)
        max1 = S2;
    if(S3 < S4)
       max2 = S4;
    max=max1;
    if(max2>max1)
        max=max2;
    printf("%.2f", max);    
    return 0;
}

