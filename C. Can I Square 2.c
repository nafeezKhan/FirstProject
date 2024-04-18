#include <stdio.h>
#include <math.h>
 
int main()
 {
    int t;
    scanf("%d", &t);
 
    while (t--) 
    {
        int n;
        scanf("%d", &n);
        int a, i;
        long long int sum = 0;
 
        for (i = 1; i <= n; i++) 
        {
            scanf("%d", &a);
            sum = sum + a;
        }
 
        double sqrt_sum = sqrt(sum);
        printf("%s\n", (sqrt_sum == (int)sqrt_sum) ? "YES" : "NO");
    }
 
    return 0;
}