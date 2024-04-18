#include <stdio.h>
#include <string.h>
int main()
{

    int n, i, length;
    char words[101];
    
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%s", words);
    
      length = strlen(words);
        if (length > 10)
        {
            printf("%c%d%c\n", words[0], length - 2, words[length - 1]);
        }
        else
        {
            printf("%s\n", words);
        }
}
    

    return 0;
}
