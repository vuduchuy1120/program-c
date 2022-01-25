#include<stdio.h>
#include<string.h>

int main(){
    char n[1000];
    scanf ("%s", n);
    int tmp;
    int i ;
    for(i = strlen(n)-1 ; i >=0 ; i--){
	    if(n[i] == '0'){
	    	n[i] = '\0';
		}
		else
			break;
	}
    for(i = 0 ; i <= (strlen(n)-1)/2;i++){
        tmp = n[i];
        n[i] = n[strlen(n)-1 - i];
        n[strlen(n)-1-i] = tmp;
    }
    printf("%s", n);
}
