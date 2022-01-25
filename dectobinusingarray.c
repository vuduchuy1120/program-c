#include<stdio.h>

void dectobin(long long int dec, char a[], long int *len_bin){
    *len_bin = 0;
    do
    {
        a[(*len_bin++)] = dec % 2;
        dec /= 2;
    } while (dec);
}
void print_bin(char a[], long int len_bin)
{
    long int k;
    for (k = len_bin - 1; k >= 0; k--)
        printf("%d", a[k]);
}

int main(){
        long long int n;
        char a[100];
        long int i, k;
        
        scanf("%lld", &n);
        dectobin(n, a ,&i);
        print_bin(a, i);
        
        
        return 0;
        

}

