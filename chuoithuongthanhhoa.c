#include<stdio.h>

char conv(char a){
    if(a <= 'z' && a>= 'a' )
        return a - 32;
    else
    	return a;
}

int main(){
	char str[100];
	scanf("%[^\n]", str);
	int i;
	char c;
	for(i = 0 ; str[i] != '\0'; i++){
		str[i] = conv(str[i]);
		printf("%c", str[i]);
	}
	return 0;
}
