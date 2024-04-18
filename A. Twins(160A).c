#include <stdio.h>
 
int main(int argc, char const *argv[]) {
    int n, i, j, sum = 0, sum2 = 0, temp, count = 0;
    scanf("%d", &n);
    int a[n];
    
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }
 
    sum = sum / 2;
 
    for (i = 0; i < n - 1; i++) 
    {
        for (j = i + 1; j < n; j++)
         {
            if (a[i] > a[j])
             {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
 
    for (j = n - 1; j >= 0; j--) {
        sum2 = sum2 + a[j];
        count++;
        if (sum2 > sum) {
            break;
        }
    }
 
    printf("%d", count);
 
    return 0;
}