#include <stdio.h>
int main(int argc, char const *argv[])
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long int n;
        scanf("%lld", &n);
        int c = 0;
        while (n % 2 == 0)
        {
            n = n / 2;
        }
        long long int i;
        for (i = 3; i * i <= n; i = i + 2)
        {
            if (n % i == 0)
            {
                c++;
                break;
            }
        }
        if (c > 0 || n > 1)
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
