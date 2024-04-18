#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    int i, len, count1=0, count2=0;
    char s[101];
    scanf("%s", s);
    len=strlen(s);
    for ( i = 0; i <len; i++)
    {
        if (s[i]==0)
        {
           count1++;
        }
        else
        {
            count2++;
        }
    }
        if (count1 || count2 >=7)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        
        
        
    
    
    return 0;
}
