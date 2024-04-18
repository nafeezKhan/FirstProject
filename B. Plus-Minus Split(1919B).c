#include<stdio.h>
#include<string.h>
#include <stdlib.h> 
int main(int argc, char const *argv[])
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n,i;
        scanf("%d", &n);
        char s[n];
        scanf("%s", s);
        int c1=0, c2=0;
        for ( i = 0; i <n; i++)
        {
            if (s[i]=='+')
        {
            c1++;
        }
        else
        {
            c2++;
        }

        }
        int x=abs(c1-c2);
        printf("%d\n", x);
        
       
    }
    

    return 0;
}
