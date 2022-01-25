// SE1647 HE160866 Vu Duc Huy 

#include<stdio.h>
#include<math.h>

int caculate(float *n, float *k){
	
	return giaiThua(*n)/(giaiThua(*n-*k)*giaiThua(*k));
}

int giaiThua(int n)
{
    if (n == 1|| n ==0)
        return 1;
    return n * giaiThua(n - 1);
}

int in_put(float *n, float *k){
	do{
		printf("enter n, k : ");
		scanf("%f %f", &*n, &*k);
		
		if(*n!= (int)*n || *k != (int)*k)
			printf("The data you entered is not an integer. Please try again!\n");
		else if(*n < 0 )
			printf("The data you entered is not a positive number. Please try again!\n");
		else if( *n < 0 || *n >50 || *k <0 || *k > 50)
			printf("The number you entered is out of the range [0, 50]. Please try again!\n");
		else if(*n < *k)
			printf("n must be greater than or equal to k. Please try again!\n");
		else 
			printf("The data you entered is not an integer. Please try again!\n");
		
	}
	while(*n != (int)*n || *n < 0 || *n > 50 || *n < *k || *k > 50 || *k < 0 || *k != (int)*k);
}

main(){
	float n, k;
	in_put(&n, &k);
}

