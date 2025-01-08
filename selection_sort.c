#include<stdio.h>
void display_array(int a[], int n){
    for ( int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    
}

void selection_sort(int *a, int n){
    int min, temp;
    printf("Running the selection sort.......\n");
    for (int  i = 0; i < n-1; i++)
    {
        min = i;
        for (int  j = 1; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
            
        }

        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
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
    printf("\nAfter sorting : \n");
    
    selection_sort(a,n);
    
    display_array(a, n);
    
return 0;
}