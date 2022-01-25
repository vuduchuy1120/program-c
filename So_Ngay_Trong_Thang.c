#include<stdio.h>

int isLeapYear(int y) {
    return (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0));
}

void isOK(int m, int y) {

    if (isLeapYear(y) && m == 2) {
        printf("29");
    }
    else if (m == 2) {
        printf("28");
    }
    else if (m == 4 || m == 6 || m == 9 || m == 11) {
        printf("30");
    }
    else if(m < 0 || m>12)
    	printf("INVALID");
    else
    	printf("31");
}

int main(){
	int  m , y;
	char after1, after2;
	
	int rc = scanf("%d%c%d%c", &m, &after1, &y, &after2);
	if (rc == 0 || !((after1 == ' ') || after2 != '\n')){
		printf("INVALID");
	}
	else
		isOK(m,y);
	
	return 0;
}
