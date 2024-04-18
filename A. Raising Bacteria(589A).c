#include <stdio.h>
int main(int argc, char const *argv[])
{
    long long int x;
    scanf("%lld", &x);
    int b = 0;
    while (x != 0)
    {
        // b = b + (x & 1);
        b += x & 1;
        x = x >> 1; // x >>= 1;
    }
    printf("%d", b);
    return 0;
}
