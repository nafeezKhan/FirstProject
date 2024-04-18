#include<stdio.h>
int main(int argc, char const *argv[])
{
    long long int n;
    scanf("%lld", &n);
    int LD = n%10;
    int SLD = (n/10)%10;
    if (n>0)
    {
        printf("%lld", n);
        
    }
    long long int ADLD= n/10;
    long long int ADSLD= (n/100)*10+LD;
    if (n<0)
    {
        if (ADLD>ADSLD)
        {
           printf("%lld", ADLD);
        }
        else
        {
              printf("%lld", ADSLD);
        }
        
        
    }
    
    



    return 0;
}
