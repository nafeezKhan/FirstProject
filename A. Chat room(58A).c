#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int i, len, count = 0;
    char s[100];
    char a[6] = "hello"; 

    scanf("%s", s);
    len = strlen(s);

    for (i = 0; i < len; i++)
    {
        if (s[i] == a[count])
        {
            count++;
        }

        if (count == 5)
        {
            break; 
        }
    }

    if (count == 5)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
