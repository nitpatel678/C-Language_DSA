#include<stdio.h>

void print_array(int a[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }

    printf("\n");
    
}


void bubble_sort(int *a, int n) {
    int temp;
    for (int  i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            if (a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
            
        }
        
    }
    

}

int main () {
    int i,j,k,n;
    printf("Enter the size of the array:");
    scanf("%d", &n);

    int a[n];
    printf("Enter the array elements : ");
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Printing the array before sorting : ");

    print_array(a,n);

    printf("Printing the array after sorting : ");

    bubble_sort(a,n);

    print_array(a,n);

    
return 0;
}