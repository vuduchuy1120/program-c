#include<stdio.h>

int main(){
	int i, j, n, t =0 ;
	scanf("%d",&n);
	
/* Ve tam giac dac 
*
* *
* * *
* * * *
* * * * *

	for(i = 1 ; i <= n ; ++i){
		if(t != 0) printf("\n");
		for(j = 1 ; j <= i ; ++j){
			printf("* ");
		}
		t++;
	}
*/

//* * * * *
//  * * * *
//    * * *
//      * *
//        *

//	for(i = 1 ; i <= n ; ++i){
//		if(t != 0) printf("\n");
//		for(j = 1 ; j <= n ; ++j){
//			printf(((j >= i) && (j <= n ))? " *" : "  "); 
//		}
//		t++;
//	}


// Ve tam giac 
// * * * * *
// * * * *
// * * *
// * *
// *

//	for(i = 1 ; i <= n ; ++i){
//		if(t != 0) printf("\n");
//		for(j = 1 ; j <= n ; ++j){
//			printf( j <=(n + 1 - i)? "* " : "  "); 
//		}
//		t++;
//	}

/*Ve tam giac
        *
      * *
    * * *
  * * * *
* * * * *

	for(i = 1 ; i <= n ; ++i){
		if(t != 0) printf("\n");
		for(j = 1 ; j <= n ; ++j){
			printf( j >= (n + 1 - i)? "* " : "  "); 
		}
		t++;
	}

*/


}

