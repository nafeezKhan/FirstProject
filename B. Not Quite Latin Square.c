#include <stdio.h>
 
int main()
{
    int t;
    scanf("%d", &t);
 
    while (t--)
    {
        char s[3][4]; 
        int i, j;
 
        for (i = 0; i < 3; i++)
        {
            scanf("%s", s[i]);
        }
 
        char x;
        int countA = 0, countB = 0, countC = 0;
        for (i = 0; i < 3; i++)
        {
          
            for (j = 0; j < 3; j++)
            {
                if (s[i][j] == 'A')
                {
                    countA++;
                }
                else if (s[i][j] == 'B')
                {
                    countB++;
                }
                else if (s[i][j] == 'C')
                {
                    countC++;
                }
            }
        }
        if (countA < 3)
        {
            x = 'A';
         
        }
        else if (countB < 3)
        {
            x = 'B';
        }
        else if (countC < 3)
        {
            x = 'C';
        }
 
        printf("%c\n", x);
    }
 
    return 0;
}