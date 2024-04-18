#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,a,b,i;
    scanf("%d", &n);
    for ( i = 0; i <n; i++)
    {
       scanf("%d %d", &a,&b);
       if (a%b==0)
       {
        printf("0\n");
       }
       else
       {
        printf("%d\n", b-(a%b));
       }
       
    }
    
    return 0;
}
