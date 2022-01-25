#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  	char c[101];
	gets(c);
	int i;
	strlwr(c);
	for(i = 0 ; i <strlen(c); i++){
		if(c[i] == 'u'||c[i] == 'e'||c[i] == 'o'||c[i] == 'a'||c[i] == 'i')
			c[i] = toupper(c[i]);
	}

  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  for(i = 0 ; i <strlen(c) ; i++){
		printf("%c", c[i]);
	}
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
