#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int h,i,j;
    
    scanf("%d",&h);
    for(i=h;i>0;i=i-1){
        for(j=1; j< 2*h ;j++){
            if(abs(h-j)<=(i-1)){
            	printf("%d%d",(i - abs(h-j))%10,j);
            }
			else printf("**");
   	    }
            printf("\n");
    }    
        
	return 0;
}
