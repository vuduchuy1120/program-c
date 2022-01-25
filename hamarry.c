#include <stdio.h>
#define MAX_SIZE 100

void get_array(int arr[], int *n)
{
    int i;
    printf("Enter the array size: ");
    scanf("%d", n);
    
    printf("Enter elements separated by a space: ");
    for (i = 0; i < *n; i++)
        scanf("%d", &arr[i]);
}

void print_array(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
}

#include <assert.h>
int max(int array[], int n){
    int max = array[0] , i;
    for (i = 1; i < n; ++i) {
        if (max < array[i]) { 
            max = array[i];
        }
    }
    return max;
}

int main()
{
    int a[MAX_SIZE];
    int n;
    
    get_array(a, &n);
    print_array(a, n);
        
    return 0;
}
