#include<stdio.h>
#include<math.h>

main(){
    int a;
	scanf("%d", &a);
    int m = sqrt(a);
    if( a == m*m) printf("YES");
    else printf("NO");
}
