#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,i,c1=0,c2=0;
    scanf("%d", &n);
    int a[n];
    for ( i = 1; i <=n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i]%2==0)
        {
            c1++;
        }
        else
        {
            c2++;
        }

    }
    if (c1>c2)
    {
        for (i = 1; i <=n; i++)
        {
            if (a[i]%2!=0)
            {
               printf("%d", i);
               break;
            }
            
        }
        
    }
    if (c2>c1)
    {
        for ( i = 1; i <=n; i++)
        {
            if (a[i]%2==0)
            {
                printf("%d", i);
                break;
            }
            
        }
        
    }
    
    
   
    
    

    return 0;
}
