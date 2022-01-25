#include <stdio.h>
#include <math.h>
 
int Bin_to_Dec(int bin_Number)
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
 
 int main(){

	printf("%c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c ", 01000100, 01101001, 01110100, 00100000, 01101101 ,01100101, 00100000 ,01101101 ,01100001 ,01111001, 00100000 ,01110100 ,01101000 ,01100001, 01101110 ,01100111, 00100000, 01101000 ,01110101 ,01101110 ,01100111 ,00100000, 00100001);

 }
