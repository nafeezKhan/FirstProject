#include <stdio.h>
#include <string.h>

int main()
{
    int n, t, i;
    scanf("%d %d", &n, &t);
    char s[100], temp;
    scanf("%s", s);

    while (t--)
    {
        for (i = 0; i < n - 1; i++)
        {
            if (s[i] == 'B' && s[i + 1] == 'G')
            {
                temp = s[i];
                s[i] = s[i + 1];
                s[i + 1] = temp;
                i++;
            }
        }
    }
    printf("%s", s);

    return 0;
}
