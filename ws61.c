// SE1647 HE160866 Vu Duc Huy
#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    
    int max1 = 0, max2 = 0;
    int dem = 0;
    
    int a[n + 1];
    for (i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
        if (a[i] > max1) {
            max2 = max1;
            max1 = a[i];
        }
        else if (a[i] > max2) {
            max2 = a[i];
        }
    }
    
    for (i = 1; i <= n; i++) {
        if (a[i] == max2){
            dem++;
        }
    }
    printf("%d\n", dem);
    for(i = 1 ; i <=n ; i++){
        if (a[i] == max2)
            printf("%d ", i);
    }
        
    return 0;
}
