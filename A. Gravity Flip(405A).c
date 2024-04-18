#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,i,j,temp;
    scanf("%d", &n);
    int a[n];
    // Input array elements
    for ( i = 0; i <n; i++)
    {
        scanf("%d", &a[i]);
    }
    // Bubble sort algorithm
    for ( j = 0; j <n-1; j++)
    {
        for ( i = 0; i <n-1; i++)
        {
            if (a[i]>a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
            
        }
        
    }
    // Output sorted array
    for (i = 0; i < n; i++)
     {
        printf("%d ", a[i]);
    }

    
    
    

    return 0;
}
