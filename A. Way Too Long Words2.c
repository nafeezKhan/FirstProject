#include <stdio.h>
#include <string.h>

int main()
{
    int n,i;
    scanf("%d", &n);

    for ( i = 0; i < n; i++)
    {
        char word[101];
        scanf("%s", word);

        int length = strlen(word);

        if (length > 10)
        {
            printf("%c%d%c\n", word[0], length - 2, word[length - 1]);
        }
        else
        {
            printf("%s\n", word);
        }
    }

    return 0;
}
