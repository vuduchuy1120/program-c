#include<stdio.h>

int main() {
    int n, i, j;
    scanf("%d", &n);
    
    for (i = n; i >= 1; --i) {
        int sp = (n - i) * 2;
        for (j = 1; j <= sp; ++j) {
            printf(" ");
        }
        for (j = 1; j < i; ++j) {
            printf("%d ", j % 10);
        }
        printf("%d ", i%10);
        for ( j = i - 1; j >= 1; --j) {
            printf("%d ", j % 10);

        }
        printf("\n");
    }
    return 0;
}
