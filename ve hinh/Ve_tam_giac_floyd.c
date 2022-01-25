#include <stdio.h>
 /*
   1
  2  3
  4  5  6
  7  8  9 10
 11 12 13 14 15
 16 17 18 19 20 21
 22 23 24 25 26 27 28
 29 30 31 32 33 34 35 36
 */
int main() {
   int n,i,j,k=1;
 
   scanf("%d", &n);
 
   printf("Ve tam giac Floyd:\n");
   for(i = 1; i <= n; i++) {
      for(j=1;j <= i; j++)
         printf("%3d", k++);
 
      printf("\n");
   }
    
   return 0;
}
