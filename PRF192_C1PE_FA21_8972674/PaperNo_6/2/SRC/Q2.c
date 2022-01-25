#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  double a[5];
  int i;
  double sum = 0;
  for(i = 0; i< 5; i++){
  	scanf("%lf", &a[i]);
  }
  for(i = 0 ; i <5 ; i++){
  	if(a[i] >= 10 && a[i] <=15){
  		a[i] = a[i] - a[i]*10/100;
  		sum += a[i];
	}
	else
		sum += a[i];
  }
  
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  
	printf("%.1lf", sum);






  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
