#include <stdio.h>
#include <string.h>

int main() 
{
    char s[201]; // Increase the array size to accommodate the given constraints
    scanf("%s", s);
    int len = strlen(s);
    int i;

    for (i = 0; i < len; i++) 
    {
        if (s[i] == '.') 
        {
            printf("0");
        }
         else if (s[i] == '-' && s[i + 1] == '.')
         {
            printf("1");
            i++; // Skip the next character as it has already been processed
        }
         else if (s[i] == '-' && s[i + 1] == '-') 
        {
            printf("2");
            i++; // Skip the next character as it has already been processed
        }
    }

    return 0;
}
