#include <stdio.h>

long long dec2bin(int n);

int main()
{
    int a, b, i;
    printf("Enter a, b: ");
    scanf("%d %d", &a, &b);
    
    printf("%3s%10s\n", "Dec", "Bin");
    for (i = a; i <= b; i++)
        printf("%3d%10lld\n", i, dec2bin(i));
    
    return 0;
}


long long dec2bin(int n)
{
    int digit, res = 0, x10 = 1;
    
    while (n)                      // 16.. 16%2 = 0... res = 0 + 0*1. = 0./// 8 %2 = 0. 0 + 0*10 = 0. 
    {
        digit = n%2;
        res += digit * x10; // res = digit * x10 + res;
        // printf("%d %d %d\n", digit, x10, res);
        x10 *= 10;
        n /= 2;
    }
    
    return res;
}
