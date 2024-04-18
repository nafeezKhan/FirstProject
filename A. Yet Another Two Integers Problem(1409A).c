#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int t;
    scanf("%d", &t);
    int a,b;
    while (t--)
    {
        scanf("%d %d", &a,&b);
        int diff= abs(a-b);
        int moves=ceil((double)diff/10);
         printf("%d\n", moves);
        
    }
   
    

    
    return 0;
}
