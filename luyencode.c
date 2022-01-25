#include<stdio.h>
#include<math.h>

int isPrime(int n){
    int i;
    if(n < 2) return 0;
    for( i = 2 ; i <= sqrt(n) ; i ++ ){
        if( n % i == 0)
            return 0;
    }
    return 1;
}
main(){
    int n;
    scanf("%d", &n);
    long int a[n];
    long int b[n];
    int i, k,j = 0;
    for(i = 0 ; i < n ; i++){
        scanf("%d", &a[i]);
        if(isPrime(a[i]))
        	b[j++] = a[i];
    }
    n = j;
    long int tmp;
    for(j = 0; j <n ; j++){
    	for(k = j; k < n ; k++){
    		if(b[j] > b[k]){
    			tmp = b[k];
    			b[k] = b[j];
    			b[j] = tmp;
			}
		}
    }
    for(j = 0 ; j < n - 1 ; j++){
        	if(b[j] != b[j+1]){
            	printf("%ld ", b[j]);
        	}
   	}
    
    printf("%ld", b[j]);

}
