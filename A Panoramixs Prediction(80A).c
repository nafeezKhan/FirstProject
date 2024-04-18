#include<stdio.h>
int prime(int num)
{
    int i;
    for ( i = 2; i < num; i++)
    {
        if (num%i==0)
        {
            return 0;
        }
        
    }
    return 1;
}
int next_prime(int n)
{
    n++;
    while (!prime(n))
    {
        n++;
    }
    return n;
    
}
int main(int argc, char const *argv[])
{
    int n,m;
    scanf("%d %d", &n, &m);
    if (m==next_prime(n))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    
    return 0;
}
