#include<stdio.h>
int main(int argc, char const *argv[])
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x;
        scanf("%d", &x);
        if (x>=1900)
        {
            printf("Division 1\n");
        }
        else if (x>=1600 && x<=1899)
        {
             printf("Division 2\n");
        }
        else if (x>=1400 && x<=1599)
        {
             printf("Division 3\n");
        }
        else
        {
             printf("Division 4\n");
        }
        
    }
    
    return 0;
}
