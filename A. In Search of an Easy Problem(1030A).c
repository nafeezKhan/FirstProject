#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n, i, count = 0;
    scanf("%d", &n);
    int a[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);

        if (a[i] == 1)
        {
            count++;
            printf("HARD\n");
            break; // Move the break statement inside the loop
        }
    }

    if (count == 0) // Check if no element is equal to 1
    {
        printf("EASY\n");
    }

    return 0;
}
