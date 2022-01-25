#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,d;
    scanf("%f%f%f",&a,&b,&c);
    if(a==0){
        if(b==0){
            if(c == 0)
            	printf("INF");
        	else
            	printf("NO");
        }
        else{
            if(c == 0)
                printf("%.2f", 0);
            else
                printf("%.2f", -c/b);
        }
    }
    else
    {
        d = b*b - 4*a*c;
        if(d==0) printf("%.2f",-b/2*a);
        if(d>0){ 
            float root1 = (-b + sqrt(d))/(2*a), root2 = (-b - sqrt(d))/(2*a);
            if(root1 < root2 ){
                printf("%.2f %.2f",(-b + sqrt(d))/(2*a),(-b - sqrt(d))/(2*a));
            }
            else{
                printf("%.2f %.2f",(-b - sqrt(d))/(2*a),(-b + sqrt(d))/(2*a));                
            }
        }
        if(d<0) printf("NO");
    }
    
    
}
