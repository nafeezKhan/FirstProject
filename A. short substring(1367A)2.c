#include <stdio.h>
#include <string.h>
 
int main(int argc, char const *argv[])
{
    int t;
    scanf("%d", &t);
    int i;
    while (t--)
    {
        char s[101];
        scanf("%s", s);
        int len = strlen(s);
        for (i = 0; i < len - 1; i = i + 2)
        {
            printf("%c", s[i]);
        }
        printf("%c\n", s[len - 1]); 
    }
 
    return 0;
}