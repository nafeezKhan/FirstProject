#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n, m, a, b;
    int result;
    scanf(" %d %d %d %d", &n, &m, &a, &b);
    int x1 = ((n % m) * a);
    int x2 = ((n % m) * b);

    if (m * a <= b)
    {
        result = n * a;
    }

    else if (x2 > x1)
    {
        result = (n / m) * b + x1;
    }
    else
    {
        result = (n / m) * b + x2;
    }

    printf("%d", result);

    return 0;
}
