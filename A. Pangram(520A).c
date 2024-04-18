#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    int n, i, j, temp, count = 0;
    scanf("%d", &n);
    char s[101];
    scanf("%s", s);
    strlwr(s);

    for (j = 0; j < n - 1; j++)
    {
        for (i = 0; i < n - 1; i++)
        {
            if (s[i] > s[i + 1])
            {
                temp = s[i];
                s[i] = s[i + 1];
                s[i + 1] = temp;
            }
        }
    }
    for (i = 0; i < n - 1; i++)
    { 
    if (s[i] != s[i + 1])
    {
        count++;
    }
   } 

    if (count == 25)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
