#include<stdio.h>
void display_array(int a[], int n){
    for ( int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    
}

void bubble_sort(int *a ,int n){
    int temp;
    for (int i = 0; i < n-1; i++)
    {
        for ( int j = 0; i < n-1-i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j+1];

                a[j+1] = temp;
            }
            
        }
        
    }
    
}

void insertion_sort(int *a, int n){
    int temp, j;
    for (int  i = 1; i < n; i++)
    {
        temp = a[i];
        j = i-1;

        while (j >= 0 && a[j] > temp)
        {
            a[j+1] = a[j];
            j--;
        }
        
        a[j+1] = temp;
        
    }
    
}
int main () {
    int i,j,k,n;
    printf("Enter the array size :");
    scanf("%d", &n);
    printf("Enter the array elements :");
    
    int a[n];

    for ( i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Before sorting : \n");
    
    display_array(a, n);
    printf("After sorting : \n");
    
    insertion_sort(a,n);
    
    display_array(a, n);
    
return 0;
}