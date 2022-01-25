#include<stdio.h>
	int main (){
		
		printf ("Enter four integers: ");
		int a,b,c,d;
			scanf ("%d%d%d%d", &a, &b, &c, &d);
		if (a%2 !=0 && a<b && a<c && a<d)
			printf ("%d",a);
		else if (b%2 !=0 && b<a && b<c && b<d)
			printf ("%d",b);
		else if (c%2 !=0 && c<a && c<b && c<d)
			printf ("%d",c);
		else if (d%2 !=0 && d<a && d<b && d<c)
			printf ("%d",d);
		else if (a%2 ==0 && b%2==0 && c%2==0 && d%2==0) 
			printf ("Khong co so le");	
			
		return 0;			
	}

