#include <stdio.h>
int gcd(int b, int a)
{
    while (a != 0)
    {
        int temp = a;
        a = b % a;
        b = temp;
    }
    return b;
}
int main(int argc, char const *argv[])
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long int x, a, b;
        scanf("%lld %lld", &a, &b);
        int i;

        if (a < b)
        {
            if (a == 1)
            {
                x = b * b;
            }
            else
            {
                x = (a * b) / gcd(b, a);//LCM of a & b;
            }
        }
        if (x == b)
        {
            for (i = 2; i <= a; i++)
            {
                if (a % i == 0 || b % i == 0)
                {
                    x = x * i;
                    break;
                }
            }
        }
        printf("%lld\n", x);
    }

    return 0;
}
