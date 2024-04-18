#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    int a[4], i;
    for (i = 0; i < 4; i++)
    {
        scanf("%d", &a[i]);
    }
    char s[100001];
    scanf("%s", s);
    int len = strlen(s);
    int sum = 0;
    for (i = 0; i < len; i++)
    {
        if (s[i] == '1')
        {
            sum = sum + a[0];
        }
        else if (s[i] == '2')
        {
            sum = sum + a[1];
        }
        else if (s[i] == '3')
        {
            sum = sum + a[2];
        }
        else if (s[i] == '4')
        {
            sum = sum + a[3];
        }
    }
    printf("%d", sum);

    return 0;
}
