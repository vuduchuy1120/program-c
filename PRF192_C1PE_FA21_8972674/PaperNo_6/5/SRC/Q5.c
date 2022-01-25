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
  
  	int n, i;
  	scanf("%d", &n);
  	int a[n];
  	for(i = 0 ; i < n ; i++){
  		scanf("%d", &a[i]);
  	}
  	int check = 0;
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  	for(i = 0 ; i < n ; i++){
  		if(isPrime(a[i]) == 1){
  			printf("%d ", a[i]);
  			check = 1;
		  }		
  	}
  	if(check == 0)
  		printf("no primes in the array");
	






  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
