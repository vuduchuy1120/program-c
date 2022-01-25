#include<stdio.h>

int conv(char a){
    if(a <= 'z' && a>= 'a' )
        return a - 32;
}
int main(){
    char a, b;
    int  i;
    scanf("%c %c", &a, &b);
    if(conv(a))
    	a = conv(a);
    if(conv(b))
		b = conv(b);

    for(i = a ; i <= b ; i++){
        printf("%c ", i);
    }
}
