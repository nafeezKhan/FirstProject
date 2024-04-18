#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        char s[n];
        scanf("%s", s);
        printf("%c", s[0]);
        int i;
        for (i = 1; i < n; i++)
        {
            if (s[i] != 'a' || s[i] != 'e')
            {
                if (s[i + 1] == 'a' || s[i + 1] == 'e')
                {
                    printf(".%c", s[i]);
                }
                else
                {
                    printf("%c", s[i]);
                }
            }
            else
            {
                printf("%c", s[i]);
            }
        }
        printf("\n");
    }

    return 0;
}
