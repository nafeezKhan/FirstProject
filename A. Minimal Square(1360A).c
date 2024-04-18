#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a,b;
        scanf("%d %d", &a, &b);
        int ans;
        if (a==b)
        {
            ans=(a*2)*(a*2);
            printf("%d\n", ans);
        }
        else if (a>b && a%2==0 && b%2==0)
        {
            ans=a*a;
             printf("%d\n", ans);
        }
        else if (a>b && a%2!=0 && b%2!=0)
        {
            ans=a*a;
             printf("%d\n", ans);
        }
         else if (b>a && a%2!=0 && b%2!=0)
        {
            ans=b*b;
             printf("%d\n", ans);
        }
        else if (a>b && a%2!=0 )
        {
           ans=(a+1)*(a+1);
            printf("%d\n", ans);
        }
         else if (b>a && b%2!=0 )
        {
           ans=(b+1)*(b+1);
            printf("%d\n", ans);
        }
        
        
        
        

        
        
    }
    
    return 0;
}
