#include<stdio.h>

int main(){
	int i, j, n, t =0 ;
	scanf("%d",&n);
/* ve hinh vuong rong 
* * * * *
*       *
*       *
*       *
* * * * *
	
	
	for(i = 1 ; i <= n ; ++i){
		if(t != 0) printf("\n");
		for(j = 1 ; j <= n ; ++j){
			printf( (i == 1 || j==1 || i== n || j == n)? "* " : "  "); 
		}
		t++;
	}
*/

/* ve hinh zich zac 
* * * * *
  *
    *
      *
* * * * *

	for(i = 1 ; i <= n ; ++i){
		if(t != 0) printf("\n");
		for(j = 1 ; j <= n ; ++j){
			printf( (i == 1 || j==i || i== n)? "* " : "  "); 
		}
		t++;
	}


* * * * *
      *
    *
  *
* * * * *

	for(i = 1 ; i <= n ; ++i){
		if(t != 0) printf("\n");
		for(j = 1 ; j <= n ; ++j){
			printf( (i == 1 || j == n + 1 - i || i== n)? "* " : "  "); 
		}
		t++;
	}

* * * * *
  *   *
    *
  *   *
* * * * *

	for(i = 1 ; i <= n ; ++i){
		if(t != 0) printf("\n");
		for(j = 1 ; j <= n ; ++j){
			printf( (i == 1 || j == n + 1 - i || j ==i ||  i== n)? "* " : "  "); 
		}
		t++;
	}

* * * * *
* *   * *
*   *   *
* *   * *
* * * * *

	for(i = 1 ; i <= n ; ++i){
		if(t != 0) printf("\n");
		for(j = 1 ; j <= n ; ++j){
			printf( (i == 1 || j == n + 1 - i || j ==i || j == 1|| j == n ||  i== n)? "* " : "  "); 
		}
		t++;
	}
*/

}

