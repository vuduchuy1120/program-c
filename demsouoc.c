#include<stdio.h>
#include<math.h>

int Count(int n){
    int d = 0, i;
    for(i = 1 ; i <= sqrt(n); i++){
        if(n % i ==0){
            d++;
            if(n / i != i){
                d++;
            }
        }
    }
    printf("%d", d);
}
main(){
    int n;
    scanf("%d", &n);
    n = abs(n);
    Count(n);
}
