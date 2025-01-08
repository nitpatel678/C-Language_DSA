#include <stdio.h>

int binary_search(int a[], int size, int key)
{
    int low = 0, high = size - 1;

    while (low <= high)
    {
        {
            int mid = (low + high) / 2;
            if (a[mid] == key)
            {
                return mid;
            }

            else if (a[mid] < key)
            {
                low = mid + 1;
            }

            else
            {
                high = mid - 1;
            }
        }

       
    }

     return 1;
}

int main()
{
    int i,j,n,k;

    printf("Enter the size of the array :");
    scanf("%d", &n);

    int a[n];
    
    for ( i = 0; i < n; i++)
    {
        printf("Enter the element : ");
        scanf("%d", &a[i]);
    }

    printf("Enter the key : ");
    scanf("%d", &k);

    int result = binary_search(a, n, k);
    
    if (result == 1)
    {
        printf("Key has been found");
    }

    else{
        printf("Key has not been found");
    }
    

    return 0;
}





