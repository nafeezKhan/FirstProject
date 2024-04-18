#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    int i, len1;
    char s1[101];
    char s2[101];
    scanf("%s", s1);
    scanf("%s", s2);
    len1=strlen(s1);
 
    for (i = 0; i < len1; i++)
    {
        if (s1[i] == s2[i])
        {
            printf("0");
        }
        else
        {
            printf("1");
        }
    }
 
    return 0;
}