#include <stdio.h>
#include <string.h>
 
int main(int argc, char const *argv[])
{
    int i, len, count = 0, count2 = 0;
    char s[101];
 
    scanf("%s", s);
    len = strlen(s);
 
    for (i = 0; i < len; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            count2++;
        }
    }
 
    if (count2 == len)
    {
        strlwr(s);
        printf("%s", s);
    }
    else
    {
        count = 0;
        count2 = 0;
 
        for (i = 1; i < len; i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                count++;
            }
        }
 
        if (count > 0)
        {
            printf("%s", s);
        }
        else
        {
            strlwr(s);
            s[0] = s[0] - 32;
            printf("%s", s);
        }
    }
 
    return 0;
}