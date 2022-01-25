#include <stdio.h>
#include <math.h>
 
void read(double *n, double *k) {
    while (scanf("%lf %lf", &*n, &*k) != -1) { 
        if (*n != (int)(*n) || *k != (int)(*k)) {
            printf("The data you entered is not an integer. Please try again!");
            printf("\n");
        }
        else if (*n < 0 || *k < 0) {
            printf("The data you entered is not a positive number. Please try again!");
            printf("\n");
        }
        else if (*n > 50 || *k > 50) {
            printf("The number you entered is out of the range [0, 50]. Please try again!");
            printf("\n");
        }
        else if (*n < *k){
            printf("n must be greater than or equal to k. Please try again!");
            printf("\n");
        }
            else break;
    }
}
 
 long chinhHop(int k, int n)
{
    long a[50][50];
    if (k==0||k==n) return 1;
    else for (int i=0;i<=k;i++)
        for (int j=i;j<=n;j++)
            if (i==0||i==j) a[i][j]=1;
            else a[i][j]=a[i][j-1]+a[i-1][j-1];
    return a[k][n];
}

void solve() {
 
}
 
int main() {
    double n, k;
    read(&n, &k);
    int x = (int)n;
    int y = (int)k;
    printf("The result is %ld",chinhHop(y, x));
    solve();
    return 0;
}
