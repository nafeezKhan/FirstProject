#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
 {
    long long n, x;
    scanf("%lld", &n);
    
    // Calculate f(n)
    x = (pow(-1, n) * (n + 1)) / 2;
    
    // Use floor function to round down the result
    x = floor(x);

    printf("%lld", x);

    return 0;
}

