#include <stdio.h>
#include<string.h>
int main()
{   
    int i,len, count=0;
    char s[1000];
    scanf("%s", s);
    len=strlen(s);
    for ( i = 0; i <len; i++)
    {
        if (s[i]=='4' || s[i]=='7')
        {
            count++;
        }
        
    }
    if (count==4 || count==7)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    
    
    


    return 0;
}


