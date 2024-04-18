#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    int i, j, len, count = 0, temp;
    char s[1001];
    gets(s);
    len = strlen(s);
    printf("%d\n", len);
    printf("%s\n", s);
    for (j = 0; j < len - 1; j++)
    {
        for (i = 0; i < len - 1; i++)
        {
            if (s[i] > s[i + 1])
            {
                temp = s[i];
                s[i] = s[i + 1];
                s[i + 1] = temp;
            }
        }
    }
    printf("Sorted String: %s\n", s);
    for ( i = 0; i < len-1; i++)
    {
        if (s[i]=='{' || s[i]==',' || s[i]==' ' || s[i]=='}')
        {
            continue;
        }
        else
        {
            if (s[i]!=s[i+1])
            {
                count++;
            }
            
        }
        
        
    }
    printf("%d", count);
    
    

    return 0;
}
