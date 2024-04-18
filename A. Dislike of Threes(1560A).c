#include<stdio.h>
int main(int argc, char const *argv[])
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int k,i;
        scanf("%d", &k);
        for ( i = 1; i <=1666; i++)
        {
            if (i%3==0 || i%10==3)
            {
               continue;
            }
            else
            {
                k--;
            }
            if (k==0)
            {
                printf("%d\n", i);
                break;
            }
            
            
            
        }
        
        
    }
    
    return 0;
}
