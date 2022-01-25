#include <stdio.h>
#include <math.h>
    
int Bin_to_Dec(long long bin_Number)
{
    int dec_Number = 0, count = 0;
    while(bin_Number > 0)
	{
		dec_Number += (bin_Number % 10) * pow(2, count);
		count++;
		bin_Number /= 10;
	}
	return dec_Number;
}


int main() {
	int a, i;
	scanf("%d", &a);
    int arr[1000], index = 0;
    while(a--){
	    long long n;
        scanf("%d", &n);
        arr[index] = Bin_to_Dec(n);
	    index++;
	}  
    for ( i = 0; i < index; i++) {
        printf("%d\n", arr[i]);
    }
}
