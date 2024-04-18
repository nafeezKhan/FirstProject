#include<stdio.h>
#include<string.h>
int main()
{
    int x,i,count=0;
    scanf("%d", &x);
    char s[100];
    scanf("%s", s);
    for ( i = 0; i <x; i++)
    {
        if (s[i]==s[i+1])
        {
            count++;
        }
        
    }
    printf("%d", count);

    
    return 0;
}
