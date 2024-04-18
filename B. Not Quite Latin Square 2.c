#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        char s[4][4]; // Increase size to accommodate '\0' for each string
        int i, j;

        for (i = 0; i < 3; i++)
        {
            scanf("%s", s[i]);
        }

        char x;

        for (i = 0; i < 3; i++)
        {
            int countA = 0, countB = 0, countC = 0;
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

            if (countA == 0)
            {
                x = 'A';
                break; // Break out of the loop once the missing letter is found
            }
            else if (countB == 0)
            {
                x = 'B';
                break;
            }
            else if (countC == 0)
            {
                x = 'C';
                break;
            }
        }

        printf("%c\n", x);
    }

    return 0;
}
