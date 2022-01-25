#include<stdio.h>
#include<math.h>

int dem(int n){
	int count = 0;
	while(n>0){
		int a = n % 10;
		count++;
		n/=10;
	}
	return count;
}
main(){
	int n;
	int i,j;
	scanf("%d", &n);
	int t = 0; 
	int d = dem((int)(pow(2,n-1)));
	for(i = 0 ; i < n; i++){
		if(t!=0)
			printf("\n");
		for(j = n-1 ; j> i ; j--){
				if(j == n-1)
					printf("%*s", 0," ");
				else
					printf("%*s", d+1," ");
		}
		for(j = 0; j<= i; j++){
			if( j == 0 && i == n-1)
				printf("%*.lf",0, pow(2,j));
			else	
				printf("%*.lf",d+1, pow(2,j));
		}
		for(j = i-1 ; j >= 0; j--)
			printf("%*.lf", d+1,pow(2,j));
		t++;
	}
	
}


