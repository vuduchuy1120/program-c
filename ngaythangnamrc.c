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
		if(rc == 0){
			Printf("Please try again!");	
		}
		else if(after1 != ' ' || after1 != '/'){
			printf("Please try again!");
			clear();
		}
		else if(after2  != ' ' || after1 != '/' ){
			printf("Please try again!");
			clear();
		}
		else if(after3  != '\n'){
			printf("Please try again!");
			clear();
		}
		else if( *k == 1 || *k == 3 || *k == 5 || *k == 7 || *k == 8 || *k == 10 || *k ==12){
			if( *n > 31 || *n < 1)
				printf("The day your entered is illegal. Please");
			else 
				printf("%d / %d / %d", n , k , l);
		}
		else if(*k == 4|| *k == 6 || *k == 9 || *k == 11){
			if( *n > 30 || *n < 1)
				printf("The day your entered is illegal. Please");
			else 
				printf("%d / %d / %d", n , k , l);
		}
		else if(checkyear(*l) == 1 && *k == 2){
				if (*n > 29 || *n < 1)
					printf("The day your entered is illegal. Please");
				else 
					printf("%d / %d / %d", n , k , l);
		}
		else if(checkyear(*l) == 0 && *k == 2){
				if (*n > 28 || *n < 1)
					printf("The day your entered is illegal. Please");
				else 
					printf("%d / %d / %d", n , k , l);
		}
		else
			keeptrying == 0;
	}
	while(keeptrying == 1);					
}
int main(){
	int n, k, l;
	input_date(&n, &k, &n);
	
	return 0;
}



