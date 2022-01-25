//#include<stdio.h>
//
//int main(){
//	int a, m, S = 0;
//	
//	scanf("%d", &a);
//	m = a;
//	while(m>0){  
//		S = S * 10 + m % 10;
//    	m /= 10;
//	}
//	if(S == a) printf("YES");
//	else printf("NO");
//	return 0;
//	
//}

#include <stdio.h>
#include <conio.h>
#include <math.h>

main(){
	int num, r, sum=0, temp;
	
	printf("nhap so nguyen: ");
	scanf("%d", &num);
	
	for(temp = num; num != 0; num = num / 10){
		r = num % 10;
		sum = sum * 10 + r;
	}
	if(temp == sum)
		printf("is a palindrome.");
	else
		printf("is not a palindrome.");
	
	return 0;
	
}
