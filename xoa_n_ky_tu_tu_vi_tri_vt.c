/*
Cho chu?i str, nh?p v�o v? tr� vt v� s? k� t? c?n x�a n, 
hay x�a n k� t? t�nh t? v? tr� vt trong chu?i str.
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void xoa(char *s,int vt,int n)
{
    strcpy(s+vt,s+vt+n);
    puts(s);
}

int main()
{
    char s1[100];
    gets(s1);
    int pos, n;
    scanf("%d%d", &pos, &n);
    xoa(s1, pos, n);
    return 0;
}
