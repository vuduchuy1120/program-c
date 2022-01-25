#include<stdio.h>

int main(){
	int a[100];
	int i = 0;
	int flag = 1;
	double ave = 0;
	int countave = 0;
	int countne = 0;
	do{
		scanf("%d", &a[i]);
		if(a[i] == 0) 
			flag = 0;
		else
			i++;
	}
	while(flag == 1);
	int n = i ;
	for(i = 0 ; i <n; i++){
		if(a[i] % 5 == 0){
			countave++;
			ave += a[i]; 
		}
		else if(a[i] < 0 &&  a[i] % 2 == 0)
			countne++;
	}
	printf("%.2lf %d", ave/countave , countne);
}
