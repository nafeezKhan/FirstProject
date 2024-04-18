#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int x,y;
    if (n%2==0)
    {
        x=4;
        y=n-4;
         printf("%d %d\n", x, y);
    }
    else
    {
        x=9;
        y=n-9;
        printf("%d %d\n", x, y);
    }
    
    
    return 0;
}
