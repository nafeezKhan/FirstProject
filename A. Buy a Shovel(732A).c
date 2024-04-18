#include <stdio.h>

int main()
{
    int k, r;
    scanf("%d %d", &k, &r);
   int shovels = 1;
    while ((k * shovels) % 10 != 0 && (k * shovels) % 10 != r)
    {
        shovels++;
    }

    printf("%d", shovels);

    return 0;
}
