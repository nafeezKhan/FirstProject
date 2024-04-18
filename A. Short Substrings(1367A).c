#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int t;
    scanf("%d", &t);
    int i, j;
    while (t--)
    {
        char s[101];
        scanf("%s", s);
        int len = strlen(s);
        char s1[51];
        for (i = 0, j = 0; i < len; i = i + 2, j++)
        {
            s1[j] = s[i];
        }
        s1[j] = '\0'; 
        printf("%s", s1);
        printf("%c\n", s[len - 1]); 
    }

    return 0;
}
