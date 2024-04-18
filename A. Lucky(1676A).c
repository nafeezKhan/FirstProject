#include <stdio.h>
int main(int argc, char const *argv[])
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a[6], i;
        for (i = 0; i < 6; i++)
        {
            scanf("%1d", &a[i]);// Read each digit as a separate integer
           
        }
         if (a[0] + a[1] + a[2] == a[3] + a[4] + a[5])
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
