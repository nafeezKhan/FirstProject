#include<stdio.h>
int main(int argc, char const *argv[])
{
    int t;
    scanf("%d", &t);
    int a[3],i,j,temp;
    while (t--)
    {
        for ( i = 0; i <3; i++)
        {
            scanf("%d", &a[i]);
        }
        for ( j = 0; j <2; j++)
        {
            for ( i = 0; i <2; i++)
            {
                if (a[i]>a[i+1])
                {
                    temp=a[i];
                    a[i]=a[i+1];
                    a[i+1]=temp;
                }
                
            }
            
        }
        if (a[0]+a[1]==a[2])
        {
           printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        
        
        
    }
    
    return 0;
}
