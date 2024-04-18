#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n, k, l, c, d, p, x, y;
    scanf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c, &d, &p, &x, &y);
    int a1, a2, a3;
    a1 = (k * l) /x;
    a2 = c * d;
    a3 = p / y;
    int s[3] = {a1, a2, a3};
    int i, j, temp;
    for (j = 0; j < 2; j++)
    {
        for (i = 0; i < 2; i++)
        {
            if (s[i] > s[i + 1])
            {
                temp = s[i];
                s[i] = s[i + 1];
                s[i + 1] = temp;
            }
        }
    }
    int ans = s[0] / n;

    printf("%d", ans);
    return 0;
}
