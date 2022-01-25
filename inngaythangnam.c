#include<stdio.h>

void clear (void) {
	while (getchar() != '\n');
}
int checkyear(int a){
	if (a % 400 == 0) 
        return 1; 
    if (a % 4 == 0 && a % 100 != 0) 
        return 1;
    return 0; 
}
void input_date(int *n, int *k, int * l){
	int keeptrying = 1, rc;
	char after1, after2, after3;
	do{
		rc= scanf("%d%c%d%c%d%c", n, &after1, k, &after2, l, &after3);
		if(rc ==0){
			printf("The date your entered is illegal. Please try again!\n\n");	
		}
		else if(after1 != ' ' && after1 != '/'){
			printf("The date your entered is illegal. Please try again!\n\n");
			clear();
		}
		else if(after2  != ' ' && after2 != '/' ){
			printf("The date your entered is illegal. Please try again!\n\n");
			clear();
		}
		else if(after3  != '\n'){
			printf("The date your entered is illegal. Please try again!\n\n");
			clear();
		}
		else if( *k == 1 || *k == 3 || *k == 5 || *k == 7 || *k == 8 || *k == 10 || *k ==12){
			if( *n > 31 || *n < 1)
				printf("The day your entered is illegal. Please try again!\n\n");
			else{
					printf("Date: %d Month: %d Year: %d", *n , *k , *l);
					keeptrying = 0;
				}
		}
		else if(*k == 4|| *k == 6 || *k == 9 || *k == 11){
			if( *n > 30 || *n < 1)
				printf("The day your entered is illegal. Please try again!\n\n");
			else{
					printf("Date: %d Month: %d Year: %d", *n , *k , *l);
					keeptrying = 0;
				}
		}
		else if(checkyear(*l) == 1 && *k == 2){
				if (*n > 29 || *n < 1)
					printf("The day your entered is illegal. Please try again!\n\n");
				else{
					printf("Date: %d Month: %d Year: %d", *n , *k , *l);
					keeptrying = 0;
				}
		}
		else if(checkyear(*l) == 0 && *k == 2){
				if (*n > 28 || *n < 1)
					printf("The day your entered is illegal. Please try again!\n\n");
				else{
					printf("Date: %d Month: %d Year: %d", *n , *k , *l);
					keeptrying = 0;
				}	
		}
		else if( *k > 12 || *k < 1)
			printf("The day your entered is illegal. Please try again!\n\n");
	}
	while(keeptrying == 1);					
}
int main(){
	int n, k, l;
	input_date(&n, &k, &l);
	
	return 0;
}



