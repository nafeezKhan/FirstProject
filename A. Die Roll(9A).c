#include <stdio.h>
int main(int argc, char const *argv[])
{
    int y, w;
    scanf("%d %d", &y, &w);
    int A = 7 - (y > w ? y : w);
    int B = 6;
    if (A==6)
    {
       A=A/6;
       B=B/6;
    }
    else if (A==4)
    {
       A=A/2;
        B=B/2;
    }
    
    else if (A==3)
    {
         A=A/3;
        B=B/3;
    }
    else if (A==2)
    {
        A=A/2;
        B=B/2;
    }
    
    
    printf("%d/%d", A,B);
    
    

    return 0;
}
