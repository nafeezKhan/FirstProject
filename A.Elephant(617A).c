#include<stdio.h>

int main()
{
    long int i, x;
    
    scanf("%ld", &i);

    if (i > 5 && i % 5 == 0) 
    {
        x = i / 5;
    }
    else if (i > 5 && (i % 5 == 1 || i % 5 == 2 || i % 5 == 3 || i % 5 == 4))
    {
        x = (i / 5) + 1;
    }

    else
    {
        x=1;
    }
    

    printf("%ld", x);

    return 0;
}
