#include <stdio.h>

int main(){
	int n, i, j;
	scanf("%d", &n);
	
	//-------------------//
//* * * * *
//* * * *
//* * *
//* *
//*
	for(i=0; i < n; i++){
		for(j = 0; j < n; j++){
			if(j <= n - i - 1){
				printf("* ");
			}else{
				printf("  ");
			}
		}
		printf("\n");
	}
	
	printf("\n\n");
	
	//------------------//
//	      *
//      * *
//    * * *
//  * * * *
//* * * * *	
	for(i=0; i < n; i++){
		for(j = 0; j < n; j++){
			if(j >= n - i - 1){
				printf("* ");
			}else{
				printf("  ");
			}
		}
		printf("\n");
	}	
		
	printf("\n\n");

	//--------------------//
//*
//* *
//* * *
//* * * *
//* * * * *
	for(i=0; i < n; i++){
		for(j = 0; j < n; j++){
			if(j <= i){
				printf("* ");
			}else{
				printf("  ");
			}
		}
		printf("\n");
	}
	
	printf("\n\n");
	
	//---------------------//
//* * * * *
//  * * * *
//    * * *
//      * *
//        *
	for(i=0; i < n; i++){
		for(j = 0; j < n; j++){
			if(j >= i){
				printf("* ");
			}else{
				printf("  ");
			}
		}
		printf("\n");
	}
	
	printf("\n\n");
	
	//-----------------------//
//* * * * *
// * * * *
//  * * *
//   * *
//    *
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			if(j >= i){
				printf("* ");
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
	
	printf("\n\n");
	
	//-----------------------//
//    *
//   * *
//  * * *
// * * * *
//* * * * *
	for(i=0; i < n; i++){
		for(j = 0; j < n; j++){
			if(j >= n - i - 1){
				printf("* ");
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
	
	printf("\n\n");
	
	//-------------------------//
//	      *
//      * * *
//    * * * * *
//  * * * * * * *
//* * * * * * * * *
	
	for(i = 1; i <= n; i++){
		for(j = 1; j <= n + i - 1; j++){
			if(j >= n - i + 1){
				printf(" * ");
			}else{
				printf("   ");
			}
		}
		printf("\n");
	}
	
	printf("\n\n");
	
	//------------------------//
//* * * * * * * * *
//  * * * * * * *
//    * * * * *
//      * * *
//        *
	for(i = n; i >= 1; i--){
		for(j = 1; j <= n + i - 1; j++){
			if(j >= n - i + 1){
				printf(" * ");
			}else{
				printf("   ");
			}
		}
		printf("\n");
	}
	
	printf("\n\n");
	
	//----------------------//
//        *
//      * *
//    * * *
//  * * * *-  
//* * * * *
//  * * * *
//    * * *
//      * *
//        *
	for(i = 1; i <= 2*n-1; i++){
		for(j = 1; j <= n; j++){
			if((j >= n - i + 1 && i<=n) || (j>=i-n+1 && i>n)){
				printf("* ");
			}else{
				printf("  ");
			}
		}
		printf("\n");
	}
	
	printf("\n\n");
	
	//----------------------//
//*
//* *
//* * *
//* * * *
//* * * * *
//* * * *
//* * *
//* *
//*
	for(i = 1; i <= 2*n-1; i++){
		for(j = 1; j <= n; j++){
			if((j<=i && (i<=n)) || (j<= 2*n-i && i>n)){
				printf("* ");
			}else{
				printf("  ");
			}
		}
		printf("\n");
	}
	
	printf("\n\n");
	
	//---------------------//
//    *
//   * *
//  * * *
// * * * *
//* * * * *
// * * * *
//  * * *
//   * *
//    *
	for(i=0; i < 2*n-1; i++){
		for(j = 0; j < n; j++){
			if((i < n && j >= n - i - 1) || (i >= n && j > i-n)){
				printf("* ");
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
	
	printf("\n\n");
//             *
//          *  *  *
//       *  *  *  *  *
//    *  *  *  *  *  *  *
// *  *  *  *  *  *  *  *  *
//    *  *  *  *  *  *  *
//       *  *  *  *  *
//          *  *  *
//             *
	for(i = 1; i <= n; i++){
		for(j = 1; j <= n + i - 1; j++){
			if(j >= n - i + 1){
				printf(" * ");
			}else{
				printf("   ");
			}
		}
		printf("\n");
	}
	for(i = n-1; i >= 1; i--){
		for(j = 1; j <= n + i - 1; j++){
			if(j >= n - i + 1){
				printf(" * ");
			}else{
				printf("   ");
			}
		}
		printf("\n");
	}
}
