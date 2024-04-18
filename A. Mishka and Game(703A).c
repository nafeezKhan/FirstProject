#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int c1=0, c2=0;
    while (n--)
    {
        int m, c;
        scanf("%d %d", &m, &c);
        if (m>c)
        {
            c1++;
        }
       else if (c>m)
       {
         c2++;
       }
       
    }
    if (c1>c2)
    {
        printf("Mishka\n");
    }
    else if (c2>c1)
    {
         printf("Chris\n");
    }
    else
    {
        printf("Friendship is magic!^^\n");
    }
    
    
    
    
    return 0;
}
