#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, a, b;
    scanf("%d", &n);

    while (n--) // checks whether the value of n after the post-decrement is non-zero
    {
        scanf("%d %d", &a, &b);
        int count = 0;
    // Count the number of moves needed
    while (a % b != 0)
    {
        a++; // Increase a by 1 in each move
        count++;
    }
       printf("%d\n", count);

    }

    return 0;
}
