#include <stdio.h>
#include<math.h>
int main(int argc, char const *argv[]) 
{
    int a, b;
    scanf("%d %d", &a, &b);
    int x, y;
    int c1 = 0, c2 = 0;
 
    while (a != 0 && b != 0)
     {
        x = a - 1;
        y = b - 1;
        c1++;
        a = a - 1;
        b = b - 1;
     }
        if (a != 0 && a!=1) 
        {
            c2 =c2+floor(a / 2) ;
        } else if (b != 0 && b !=1) 
        {
            c2 = c2+floor(b / 2);
        } else 
        {
            c2 = 0;
        }
 
    printf("%d %d", c1, c2);
 
    return 0;
}