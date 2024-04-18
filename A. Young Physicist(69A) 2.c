#include <stdio.h>

int main() {
    int n, i;
    int sum_x = 0, sum_y = 0, sum_z = 0;

    // Input the number of force vectors
    scanf("%d", &n);

    // Input and calculate the sum of force vectors
    for (i = 0; i < n; i++) {
        int x, y, z;
        scanf("%d %d %d", &x, &y, &z);
        sum_x =sum_x+ x;
        sum_y =sum_y+ y;
        sum_z =sum_z+ z;
    }

    // Check if the sum of force vectors is zero
    if (sum_x == 0 && sum_y == 0 && sum_z == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
