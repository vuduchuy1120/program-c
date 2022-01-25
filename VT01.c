#include<stdio.h>

main(){
    int n = 10;
    long int a[n+1];
    int i = 1;
  
    while(n>0){
        scanf("%ld", &a[i]);
        i++; 
		n--;    
    }
    int flag = 1;
    long int x;
    scanf("%ld", &x);
     for(i = 1 ; i <= 10 ; i++){
    	if(a[i] == x){
            printf("%d ", i);
			flag = 0;
		}
	}
    if(flag == 1)
        printf("-1");
    
}
