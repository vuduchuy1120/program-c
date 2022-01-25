#include<stdio.h>
#include<math.h>

int UCLN(int a, int b){
	    a= abs(a);
    	b= abs(b);
    while(a != b){
        if(a>b){
            a -= b;
        }
        else
            b -= a;
    }
    return a;
}
int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    int s = abs(a*b);
    printf("%d", s/UCLN(a,b));
}
