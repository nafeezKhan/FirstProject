#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, c;
    int x1, x2, x3, x4, x5;
    scanf("%d %d %d", &a, &b, &c);
    x1 = a + b * c;
    x2 = a * (b + c);
    x3 = a * b * c;
    x4 = (a + b) * c;
    x5 = a + b + c;
    int max = x1;

    if (x2 > max)
    {
        max = x2;
    }
    if (x3 > max)
    {
        max = x3;
    }
    if (x4 > max)
    {
        max = x4;
    }
    if (x5 > max)
    {
        max = x5;
    }
    printf("%d", max);

    return 0;
}
