/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    char s1[100], s2[100] ,s3[100], *ptr;
    scanf("%[^\n]%*c%[^\n]%*c%[^\n]%*c", s1 , s2,s3);
	char c[100][50];
	int b[100];
	int n = 0;
	char *token = strtok(s1,s2);
	while(token != NULL){
		strcpy(c[n], token);
		++n;
		b[n] = 0;
		printf("%s \n", s1);
		token = strtok(NULL, " ");
	}
    
//    if(ptr != NULL){
//    pos = ptr - p;
//    reverse(p, pos, pos + len_o -1);
//    pos += len_o;
//
//    
//    printf("%s", p);

    return 0;
}

