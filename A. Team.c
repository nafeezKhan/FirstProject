#include <stdio.h>
int main()
{
    int n, i, a, b, c, count;
    count = 0;
    printf("enter number of problems:\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("how many friends are sure about the solution:\n");
        scanf("%d %d %d", &a, &b, &c);
        if (a + b + c >= 2)
        {
            count++;
        }
    }
    printf(" the number of problems the friends will implement on the contest is: %d\n", count);

    return 0;
}
