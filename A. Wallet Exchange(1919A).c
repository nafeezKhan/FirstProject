#include<stdio.h>
int main(int argc, char const *argv[])
{
    int t;
    scanf("%d", &t);
    while (t--)
{
       long long int a,b;
        scanf("%lld %lld", &a, &b);
        long long int x =a+b;
         if (x%2==0)
         {
            printf("Bob\n");
         }
         else
         {
            printf("Alice\n");
         }
         

         
 
}
    
    
    return 0;
}
