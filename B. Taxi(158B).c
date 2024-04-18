#include <stdio.h>

int main()
 {
    int n;
    scanf("%d", &n);
    int a[n];

    int count_1 = 0, result_1 = 0, result_2 = 0, count_3 = 0, count_4 = 0;

    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);

        if (a[i] == 3) 
        {
            count_3++;
            count_1--;
        } else if (a[i] == 4) 
        {
            count_4++;
        } else if (a[i] == 2)
         {
            result_2 += a[i];
        } else if (a[i] == 1) 
        {
            count_1++;
        }
    }

    int division = result_2 / 4;
    int modulus_2 = result_2 % 4;

    if (count_1 > 0) 
    {
        result_1 = (modulus_2 + count_1 + 3) / 4;
    } else 
    {
        result_1 = (modulus_2 + 3) / 4;
    }

    int result = count_4 + count_3 + division + result_1;

    printf("%d\n", result);

    return 0;
}
