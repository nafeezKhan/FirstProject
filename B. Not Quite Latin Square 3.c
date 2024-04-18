#include <stdio.h>

int main()
 {
    int t;
    scanf("%d", &t);

    while (t--) 
    {
        char s1[3], s2[3], s3[3];
        int sum = 0,i;

        for ( i = 0; i < 3; i++) 
        {
            scanf(" %c", &s1[i]);
            sum += s1[i];
        }

        for ( i = 0; i < 3; i++) 
        {
            scanf(" %c", &s2[i]);
            sum += s2[i];
        }

        for ( i = 0; i < 3; i++) 
        {
            scanf(" %c", &s3[i]);
            sum += s3[i];
        }

        int result = 594 - sum;

        if (result == 2)
            printf("A\n");
        else if (result == 3)
            printf("B\n");
        else
            printf("C\n");
    }

    return 0;
}
