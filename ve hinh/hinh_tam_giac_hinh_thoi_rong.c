#include <stdio.h>

int main(){
	int n, i, j;
	scanf("%d", &n);
	
	//----------------------//
//* * * * *
//*     *
//*   *
//* *
//*
	int count = 0;
	for(i=0; i < n; i++){
		if(count != 0) printf("\n");
		for(j = 0; j < n; j++){
			if(j == n - i - 1 || j==0 || i==0){
				printf("* ");
			}else{
				printf("  ");
			}
		}
		count++;
//		printf("\n");
	}
	printf("--------------------------");
	printf("\n\n");	
	
	//-----------------------//
//        *
//      * *
//    *   *
//  *     *
//* * * * *
	for(i=0; i < n; i++){
		for(j = 0; j < n; j++){
			if(j == n - i - 1 || j == n-1 || i == n-1){
				printf("* ");
			}else{
				printf("  ");
			}
		}
		printf("\n");
	}
	
	printf("\n\n");
	
	//-------------------------//
//*
//* *
//*   *
//*     *
//* * * * *
	for(i=0; i < n; i++){
		for(j = 0; j < n; j++){
			if(j == i || j == 0 || i == n-1){
				printf("* ");
			}else{
				printf("  ");
			}
		}
		printf("\n");
	}
		
	printf("\n\n");
	
	//-------------------------//
//* * * * *
//  *     *
//    *   *
//      * *
//        *
	for(i=0; i < n; i++){
		for(j = 0; j < n; j++){
			if(j == i || i == 0 || j == n-1){
				printf("* ");
			}else{
				printf("  ");
			}
		}
		printf("\n");
	}
	
	printf("\n\n");
	//-------------------------//
// * * * * *
//  *     *
//   *   *
//    * *
//     *
	for(i = n-1; i >= 0; i--){
		for(j = 0; j < n; j++){
			printf(" ");
			if(j >= n - i - 1){
				if(j == n - i - 1 || j == n-1 || i == n-1){
					printf("*");
				}else{
					printf(" ");
				}
			}
		}
		printf("\n");
	}
	
	printf("\n\n");
	//------------------------//
//     *
//    * *
//   *   *
//  *     *
// * * * * *
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			printf(" ");
			if(j >= n - i - 1){
				if(j == n - i - 1 || j == n-1 || i == n-1){
					printf("*");
				}else{
					printf(" ");
				}
			}
		}
		printf("\n");
	}
	
	printf("\n\n");
	//-----------------------//
//             *
//          *     *
//       *           *
//    *                 *
// *  *  *  *  *  *  *  *  *
	for(i = 1; i <= n; i++){
		for(j = 1; j <= n + i - 1; j++){
			if(j == n - i + 1 || i == n || j == n + i -1){
				printf(" * ");
			}else{
				printf("   ");
			}
		}
		printf("\n");
	}
	
	printf("\n\n");
	//-----------------------//
// *  *  *  *  *  *  *  *  *
//    *                 *
//       *           *
//          *     *
//             *
	for(i = n; i >= 1; i--){
		for(j = 1; j <= n + i - 1; j++){
			if(j == n - i + 1 || i==n || j == n+i-1){
				printf(" * ");
			}else{
				printf("   ");
			}
		}
		printf("\n");
	}
	
	printf("\n\n");
	//------------------------//
//             *
//          *     *
//       *           *
//    *                 *
// *                       *
//    *                 *
//       *           *
//          *     *
//             *
	for(i = 1; i <= n; i++){
		for(j = 1; j <= n + i - 1; j++){
			if(j == n - i + 1 || j == n+i-1){
				printf("*");
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
	for(i = n-1; i >= 1; i--){
		for(j = 1; j <= n + i - 1; j++){
			if(j == n - i + 1 || j == n + i -1){
				printf("*");
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
	
	printf("\n\n");
	//-----------------------//
	for(i = 1; i <= n; i++){
		for(j = 1; j <= 2*n - 1; j++){
			if( (j >= 1 && j <= n - i + 1) || (j >= n+i-1 && j <= 2*n-1)){
				printf("*");
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
	for(i = n-1; i >= 1; i--){
		for(j = 1; j <= 2*n - 1; j++){
			if((j >= 1 && j <= n - i + 1) || (j >= n + i -1 && j <= 2*n-1)){
				printf("*");
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
}
