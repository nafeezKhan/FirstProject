#include <stdio.h>
int main(int argc, char const *argv[])
{
   long long int t;
   scanf("%lld", &t);
   while (t--)
   {
      long long int x, y, n;
      scanf("%lld %lld %lld", &x, &y, &n);
      int c = (n - y) / x;
      int k = (c * x + y);
      printf("%d\n", k);
   }

   return 0;
}
