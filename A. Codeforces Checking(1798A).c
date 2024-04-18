#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char x;
        scanf(" %c", &x);// use a space before the format specifier to ignore whitespace characters, including the newline
        if (x == 'c' || x == 'o' || x == 'd' || x == 'e' || x == 'f' || x == 'r' || x == 's')
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}
