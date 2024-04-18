#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j, a[4];
    int count=0, temp;
   for ( i = 0; i <4; i++)
   {
    scanf("%d", &a[i]);
    
   }
   for (j = 0; j <3; j++)
    { 
        for ( i = 0; i < 3; i++)
        {
            if (a[i]>a[i+1])
            {
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
            }
            
        }
    }
     for (i = 0; i < 3; i++)
    {
        if (a[i] == a[i + 1])
        {
            count++;
        }
    }

   printf("%d", count);
   
    
   

    return 0;
}
