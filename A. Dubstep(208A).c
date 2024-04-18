#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    int i, len;
    char s[201];
    scanf("%s", s);
    len = strlen(s);
    for (i = 0; i < len; i++)
    {
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
        {

            printf(" ");
            i = i + 2;
        }
        else
        {
            printf("%c", s[i]);
        }
    }

    return 0;
}
