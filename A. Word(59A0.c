#include <stdio.h>
#include <string.h>

int main()
{
    int i, len, count1 = 0, count2 = 0;
    char s[101];
    scanf("%s", s);
    len = strlen(s);

    for (i = 0; i < len; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }

       if (count1 >= count2)
    {
        strlwr(s);
    }
    else
    {
        for (i = 0; i < len; i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                s[i] = s[i] - 32;
            }
        }
    }

    printf("%s\n", s);

    return 0;
}
