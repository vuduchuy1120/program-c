#include <stdio.h>
#include <string.h>

/*
1 2 3 4 5 6 7 8 7 6 5 4 3 2 1
1 2 3 4 5 6 7   7 6 5 4 3 2 1
1 2 3 4 5 6       6 5 4 3 2 1
1 2 3 4 5           5 4 3 2 1
1 2 3 4               4 3 2 1
1 2 3                   3 2 1
1 2                       2 1
1                           1
*/
int main()
{
    int n, i, j, v;
    scanf("%d", &n);
    
//    for(i = 0; i < n; i++)
//    {
//        for (j = 1; j < 2*n; j++)
//        {
//            v = j;
//            if (v > n)
//                v = 2*n - j;
//            if (n+1 - i <= v)
//                printf("  ");
//            else
//                printf("%d ", v);
//        }
//        printf("\n");
//    }

/*
1                               1
1 2                           2 1
1 2 3                       3 2 1
1 2 3 4                   4 3 2 1
1 2 3 4 5               5 4 3 2 1
1 2 3 4 5 6           6 5 4 3 2 1
1 2 3 4 5 6 7       7 6 5 4 3 2 1
1 2 3 4 5 6 7 8   8 7 6 5 4 3 2 1
1 2 3 4 5 6 7 8 9 8 7 6 5 4 3 2 1
*/
	for(i = 0; i < n; i++)
    {
        for (j = 1; j < 2*n; j++)
        {
            v = j;
            if (v > n)
                v = 2*n - j;
            if (j > i +1  && j < 2*n-i-1)
                printf("  ");
            else
                printf("%d ", v);
        }
        printf("\n");
    }
    
    return 0;
}
