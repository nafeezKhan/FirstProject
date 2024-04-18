#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x[4], i;
    for (i = 0; i < 4; i++)
    {
        scanf("%d", &x[i]);
    }

    int j, temp;
    for (j = 0; j< 3; j++)
    {
       for ( i = 0; i < 3; i++)
       {
        if (x[i+1]>x[i])
        {
            
          temp = x[i];
          x[i] = x[i + 1];
          x[i + 1] = temp;
        }
        
       }
       
    }
         int a = x[3]-x[2];
         int b = x[3]-x[1];
          int c = x[3]-x[0];
    

     printf("%d %d %d", a, b, c);

    return 0;
}
