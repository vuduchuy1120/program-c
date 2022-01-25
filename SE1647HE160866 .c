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
 
long long chinhHop(int k, int n)
{
    if (k == 0 || k == n)
        return 1;
    if (k == 1)
        return n;
    return chinhHop(k - 1, n - 1) + chinhHop(k, n - 1);
}
void solve() {
 
}
 
int main() {
    double n, k;
    read(&n, &k);
    int x = (int)n;
    int y = (int)k;
    printf("The result is %d ",chinhHop(y, x));
    solve();
    return 0;
}
