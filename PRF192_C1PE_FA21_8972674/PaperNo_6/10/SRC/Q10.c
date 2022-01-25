#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int convert(unsigned long long n){
	int i = 0, sum = 0;
	while(n>0){
		int a = n % 10;
		sum += a * (int)(pow(2,i));
		i++;
		n/=10; 
	}
	return sum;
}
int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	unsigned long long n;
	scanf("%lld", &n );
		n = convert(n);

  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	printf("%o", n);












  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
