#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,a,b,i,current_pass=0,capacity=0;
    scanf("%d", &n);
    for ( i = 1; i <=n; i++)
    {
       scanf("%d %d", &a,&b); 
       current_pass=current_pass-a;
       current_pass=current_pass+b;
       if (current_pass>capacity)
       {
        capacity=current_pass;
       }
       
    }
    printf("%d", capacity);

    
    return 0;
}
