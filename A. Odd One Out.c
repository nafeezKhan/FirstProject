#include <stdio.h>
int main(int argc, char const *argv[])
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a[3], i;
        for (i = 0; i < 3; i++)
        {
            scanf("%d", &a[i]);
        }
        if (a[0] == a[1])
        {
            printf("%d\n", a[2]);
        }
        else if (a[0] != a[1] && a[1] != a[2])
        {
            printf("%d\n", a[1]);
        }
        else if (a[1] == a[2])
        {
            printf("%d\n", a[0]);
        }
    }
 
    return 0;
}