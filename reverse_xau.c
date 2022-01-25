/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

void reverse(char s[], int left, int right){
    int i, j;
    char c;
    for(i = left , j = right; i < j ; i++, j--){
        c = s[i];
        s[i] = s[j];
        s[j] = c ;
    }
}

int main()
{
    char p[100], o[100] , *ptr;
    scanf("%[^\n]%*c%[^\n]", p , o);
    
    int len_o = strlen(o);
    int pos = 0;
    
    do{
        ptr = strstr(p + pos , o);
        if(ptr != NULL){
            pos = ptr - p;
            reverse(p, pos, pos + len_o -1);
            pos += len_o;
        }
    }while(ptr != NULL);
    
    printf("%s", p);

    return 0;
}

