#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
     int i,j;
    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <= m; j++)
        {
            // Check if current cell is part of the snake's body
            if (i % 2 == 1)
            {
                printf("#");
            }
            else if (i % 4 == 0 && j == 1)
            {
                // If it's the bottom-left corner of the body, print #
                printf("#");
            }
            else if (i % 4 != 0 && j == m)
            {
                // If it's the top-right corner of the body, print #
                printf("#");
            }
            else
            {
                // Otherwise, print empty cell '.'
                printf(".");
            }
        }
        printf("\n");
    }

    return 0;
}
