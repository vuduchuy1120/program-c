#include<stdio.h>
int isLeapYear(int y) {
    return (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0));
}

int main(){
    int year;
    char c;
    int rc = scanf("%d%c", &year,&c);
    if(rc == 0 || year <= 0 || year > 100000)
        printf("INVALID");
    else if(c != '\n'){
        printf("INVALID");
    }
    else{
        if(isLeapYear(year))
            printf("YES");
        else
            printf("NO");
    }
}
