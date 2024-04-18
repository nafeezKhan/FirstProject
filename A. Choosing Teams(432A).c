#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,k;
    scanf("%d %d", &n, &k);
    int c=0;
    while (n--)
    {
       int y;
       scanf("%d", &y);
       if (y+k<=5)
       {
         c++;
       }
       
    }
    int x=c/3;
    if (c<3)
    {
        printf("0\n");
    }
    else
    {
        printf("%d", x);
    }
    
    
    
    return 0;
}
