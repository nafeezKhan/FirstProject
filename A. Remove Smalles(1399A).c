#include <stdio.h>

int main()
 {
    int t;
    scanf("%d", &t);

    while (t--)
     {
        int n;
        scanf("%d", &n);

        int a[n];
        for (int i = 0; i < n; i++)
         {
            scanf("%d", &a[i]);
        }

        // Sort the array in ascending order
        for (int i = 0; i < n - 1; i++)
         {
            for (int j = 0; j < n - 1 - i; j++) 
            {
                if (a[j] > a[j + 1]) 
                {
                    int temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
            }
        }

        // Check if the absolute difference between every pair of consecutive elements is at most one
        int possible = 1;// here 1 declared as 'true'
        for (int i = n-1; i > 0; i--)
         {
            if (a[i] - a[i-1] > 1) 
            {
                possible = 0;//here 0 declared as 'false'
                break;
            }
        }

        if (possible==1) 
        {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
