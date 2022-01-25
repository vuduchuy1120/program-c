// SE1647 Vu Duc Huy HE160866

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {


    int a, b;
    char c;
    scanf("%d%c%d", &a, &c, &b);
    int a1 = abs(a);
    int b1 = abs(b);
    if ( b1 == 0 )
        printf("INVALID");
    else if( a1 == 0 && b1 != 0)
        printf("%d", a1);
    else{
        while(a1 != b1){
            if (a1 > b1)
                a1 = a1 - b1;
            else
                b1 = b1 - a1;
        
        }    
        a = a / a1 ;
        b = b / a1 ;
        if(a % b == 0)
            printf("%d", a/b);
        else if(b < 0 )
            printf("%d/%d", -a, -b);
        else
            printf("%d/%d", a, b);
    }
    

    return 0;
}

