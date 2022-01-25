#include<stdio.h>

void clear () {
    while (getchar() != '\n');
}

int isLeapYear(int y) {
    return (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0));
}

int isOK(int d, int m, int y) {
    if (isLeapYear(y) && m == 2) {
        return (d >= 1 && d <= 29);
    }
    if (m == 2) {
        return (d >= 1 && d <= 28);
    }
    if (m == 4 || m == 6 || m == 9 || m == 11) {
        return (d >= 1 && d <= 30);
    }
    return (d >= 1 && d <= 31);
}

void input_date(int *d, int *m, int *y) {
    int keeptrying = 1, rc;
	char after1, after2, after3;
	do {
		printf("Please, enter the date you want to display : ");
		rc = scanf("%d%c%d%c%d%c", d, &after1, m, &after2, y, &after3);
		if (rc == 0 || !((after1 == ' ' && after2 == ' ') || (after1 == '/' && after2 == '/')) || after3 != '\n') {
			printf("The data you entered is not valid. Please try again!\n\n");
            clear();
		}
		else if (!isOK(*d, *m, *y) || ( *m < 1 || *m >12)) {
            printf("The day you entered is not valid. Please try again!\n\n");
        }
		else {
			keeptrying = 0;
            printf("%d / %d / %d ", *d, *m, *y);
        }
	} while (keeptrying == 1);
}

int main() {
	int d, m, y;
	input_date(&d, &m, &y);
	
	return 0;
}
