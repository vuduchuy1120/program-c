#include<stdio.h>

int main(){
	int num, i, count = 3;
	FILE *fptr;
	FILE *pr;
	fptr = fopen("output.txt", "w");
	fptr = fopen("input.txt", "r");
	if(fptr == NULL){
		fprintf(pr,"%s","File is error");
	}
	else{
		fscanf(fptr,"%d", &num);
		do{
		fprintf(pr,"%s","File is error");
		}
		while(count)
	}
}
