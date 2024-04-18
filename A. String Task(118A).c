#include <stdio.h>
#include <string.h>
int main()
{
    int i, j = 0, len;
    char s[100];
    scanf("%s", s);
    strlwr(s);
    len = strlen(s);
    // Process the string, remove vowels, and replace with '.'
    for (i = 0; i < len; i++)
    {
        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != 'y')
        {
            printf(".%c", s[i]);
        }
    }
    s[j] = '\0'; // Null-terminate the result string
    printf("%s\n", s);

    return 0;
}
