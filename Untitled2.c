#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int a = 65, b = 90, c =0 , d = 999;
    int n, i;
    srand(time(NULL));
    scanf("%d",&n);
    for( i = 1; i <= n ;i++)
    printf("%c%c%03d ",a + rand() % (b-a+1),a + rand() % (b-a+1),c + rand() % (d-c+1) );
    return 0;
} 
