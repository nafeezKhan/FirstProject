#include<stdio.h>
int main(int argc, char const *argv[])
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a[n],i,j,temp;
        for ( i = 0; i <n; i++)
        {
           scanf("%d", &a[i]);
        }
        for ( j = 0; j <n-1; j++)
        {
            for ( i = 0; i <n-1-j; i++)
            {
                if (a[i]>a[i+1])
                {
                    temp=a[i];
                    a[i]=a[i+1];
                    a[i+1]=temp;
                }
                
            }
            
        }
        
            int x= a[n-1]-a[0];
            printf("%d\n", x);
        
        
        
       
    }
    
    return 0;
}
