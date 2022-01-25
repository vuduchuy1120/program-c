#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int isPrime(int n){
	int i;
	if(n < 2)
		return 0;
	for(i = 2; i <= sqrt(n); i++ ){
		if(n % i == 0)
			return 0;
	}
	return 1;
}

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n;
  scanf("%d", &n);
  int i, j;
  
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  
	for(i = n - 1, j = 0 ; i > 1 && j < 4 ; i-- ){
		if(isPrime(i)){
			printf("%d\n", i);
			j++;
		}
	}






  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
