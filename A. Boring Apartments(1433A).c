#include <stdio.h>
int main(int argc, char const *argv[])
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x;
        scanf("%d", &x);
        int total_digits = 0;
        int i, j;
        for (i = 1; i <= 9; i++)
        {
            int sum = 0;
            for (j = 1; j <= 4; j++)
            {
                 total_digits = total_digits + j;
                sum = sum * 10 + i;
                
                if (sum == x)
                {
                    printf("%d\n", total_digits);
                    break;
                }
            }
        }
    }

    return 0;
}
