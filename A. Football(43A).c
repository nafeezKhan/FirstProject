#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int c1 = 0, c2 = 0;
    char t1[11];
    char t2[11];
    int i;
    for (i = 0; i < n; i++)
    {
        char g[11];
        scanf("%s", g);
        if (i == 0)
        {
            strcpy(t1, g);
            c1++;
        }
        else
        {
            if (strcmp(t1, g) == 0)
            {
                c1++;
            }
            else
            {
                strcpy(t2, g);
                c2++;
            }
        }
    }
    if (c1 > c2)
    {
        printf("%s\n", t1);
    }
    else
    {
        printf("%s\n", t2);
    }

    return 0;
}
