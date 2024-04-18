#include <stdio.h>

int main(int argc, char const *argv[]) {
    int n, i, max = 0, min = 101, maxi, mini;
    scanf("%d", &n);
    int a;

    for (i = 1; i <= n; i++) {
        scanf("%d", &a);
        if (a > max) {
            max = a;
            maxi = i;
        }
        if (a <= min) {
            min = a;
            mini = i;
        }
    }

    if (maxi > mini) {
        printf("%d", (maxi - 1) + (n - mini) - 1);
    } else {
        printf("%d", (maxi - 1) + (n - mini));
    }

    return 0;
}
