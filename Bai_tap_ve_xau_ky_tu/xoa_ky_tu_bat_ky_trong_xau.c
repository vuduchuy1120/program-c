/*
Nh?p m?t chu?i b?t k�, y�u c?u nh?p 1 k� t? mu?n x�a. Th?c hi?n x�a t?t c? nh?ng k� t? d� trong chu?i.
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void xoakitu(char *a,char b)
{
    int i, j;
    int n=strlen(a);
    for(i=0;i<n;i++)
        if(a[i]==b)
        {
        for(j=i;j<n;j++)
            a[j]=a[j+1];
        i--;
        n--;
        }
    puts(a);
}

int main()
{
    char s1[100],x;
    gets(s1);
    scanf("%c", &x);
    xoakitu(s1, x);
    return 0;
}
