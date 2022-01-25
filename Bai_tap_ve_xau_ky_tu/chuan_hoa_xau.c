//12.Ðem va tra ve trong chuoi có bao nhiêu tu thoa man dieu kien tu o vi tri index la so nguyen to
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
void normalizeString(char s[]);	
void split(char s[], char word[][31], int *n);
void reBuild(char s[], char word[][31], int n);
int isPrime(int n);
int countWordAtIndexIsPrime(char word[][31], int n);
int main(){
	char s[1001];
	char word[1001][31];
	int i, n;
	printf("Enter string: ");
	gets(s); 

	split(s, word, &n);
	
	printf("(%s)\n",s);
	printf("The number of word at value of index is prime number is %d", countWordAtIndexIsPrime(word,n));
}
void normalizeString(char s[]){
	int i, j, k, n;
	char s1[1001];
	i = strlen(s) - 1;
	while(s[i] == 32) i--;
	s[i+1] = '\0';
	n = strlen(s);
	i = 0; 
	k = 0;
	while(i < n){
		while(i < n && s[i] == 32) i++;
		j = i;
		while(j < n && s[j] != 32){
			s1[k++] = s[j++];
		}
		s1[k++] = 32;
		i = j;
	}
	if(s1[k-1]==32) s1[k-1] = '\0';
	else s1[k] = 0;
	strcpy(s, s1);
}

void split(char s[], char word[][31], int *n){
	char s1[1001];
	int i, k = 0;
	strcpy(s1, s);
	normalizeString(s1);
	for(i = 0; i < strlen(s1); i++){
		if(s1[i] == 32){
			strcpy(word[k], s1);
			word[k++][i] = 0;
			strcpy(&s1[0], &s1[i+1]);
			i =- 1;
		}
	}
	
//	strcpy(word[k], s1);
//	*n = k+1;

