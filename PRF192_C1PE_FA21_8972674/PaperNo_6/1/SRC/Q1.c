#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n;
  scanf("%d", &n);
  int a[n], b[n], c[n];
  int i,j;
  	for(i = 0 ; i < n; i++){
  		scanf("%d",&a[i]);
  		b[i] = 0;
  		c[i] = 0;
	}
  	
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  for( i = 0 ; i < n; i++){
  	if(a[i] % 3 == 0 && c[i] ==0){
  		for(j = i;j < n;j++){
  			if(a[j] == a[i] && a[j] % 3 == 0 ){
  				b[i]++;
  				c[j]++;
			}
		  }
	  }
  }
	for(i = 0; i <n ; i++){
		if(b[i]!=0){
			printf("%d-%d\n", b[i],a[i]);
		}
	}
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
