#include<stdio.h>

int tohop(int n, int k){
	int i;
	if( k > n-k)
		k = n- k;
	int ans = 1;
	for(i = 0 ; i < k ; i++){
		ans *= (n-i);
		ans /= (i+1);
	}
	return ans;
}
//1                                      1
//1  1                                 1   1
//1  2  1                            1   2   1
//1  3  3  1                       1   3   3   1
//1  4  6  4  1                  1   4   6   4   1
//1  5 10 10  5  1             1   5  10  10   5   1
//1  6 15 20 15  6  1        1   6  15  20  15   6   1

//            1
//          1   1
//        1   2   1
//      1   3   3   1
//    1   4   6   4   1
//  1   5  10  10   5   1
//1   6  15  20  15   6   1

int main(){
	int n,i,j;
	scanf("%d", &n);
	for(i = 0; i < n ; i++){
		for(j = n - 2 ; j >=i; j-- ){
			printf("  ");
		}
		for(j = 0; j <=i ; j++){
			if(j == 0)
				printf("%d", tohop(i,j));
			else
				printf("%4d", tohop(i,j));
		}
		printf("\n");
	}

}
