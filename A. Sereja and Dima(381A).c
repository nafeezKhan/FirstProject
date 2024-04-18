#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int a[n], i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int s=0,d=0;
    int l=0, r=n-1;
    int turn=0;
    while (l<=r)
    {
        if (turn%2==0)
        {
           if (a[l]>a[r])
           {
             s=s+a[l];
             l++;
           }
           else
           {
             s=s+a[r];
             r--;
           }
           
           
        }
        if (turn%2==1)
        {
            if (a[l]>a[r])
           {
             d=d+a[l];
             l++;
           }
           else
           {
             d=d+a[r];
             r--;
           }
            
        }
        turn++;
        
    }
    
    printf("%d %d", s, d);

    return 0;
}
