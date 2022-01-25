#include <stdio.h>
#include <stdbool.h>
typedef long long ll;
#define PI 3.141592653589793238

bool check(double a){
	int k=a;
	if(a-k==0) return 1;
	return 0;
}
ll ans(double n,double k){
	int N=n,K=k;
	ll C[N+1][N+1];
	int i,j;
	C[0][0]=1;
	for( i=1;i<=N;i++){
		C[i][0]=1;
		C[i][i]=1;
		for(j=1;j<i;j++){
			C[i][j]=C[i-1][j-1]+C[i-1][j];
		}
	}
	return C[N][K];
}
int main(){
	double n,k;
	int t=1;
	while(t--){
		scanf("%lf%lf",&n,&k);
		if(!(check(n)&&(check(k)))){
			printf("The data you entered is not an integer. Please try again!\n");
			t++;
		}
		else if(!(n>=0&&k>=0)){
			printf("The data you entered is not a positive number. Please try again!\n");
			t++;
		}else if(!(n<=50&&k<=50)){
			printf("The number you entered is out of the range [0, 50]. Please try again!\n");
			t++;
		}else if(k>n){
			printf("n must be greater than or equal to k. Please try again!\n");
			t++;
		}else{
			printf("%lld\n",ans(n,k));	
		}
	}
	return 0;
}
