#include<stdio.h>
int main(int argc, char const *argv[])
{
    int t,i;
    scanf("%d", &t);
    for ( i = 1; i <=t; i++)
    {
        long long int n,k;
        scanf("%lld %lld",&n,&k);
        long long int result_1= k/(n-1);
        long long int result_2= k%(n-1);
        if (result_2==0)
        {
            result_2= -1;
        }
        long long int final_result = result_1*n + result_2;
        printf("%lld\n", final_result);
        
    }
    
    return 0;
}
