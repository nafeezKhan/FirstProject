#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,len,count=0;
    char s[101],temp;
    scanf("%s", s);
    len= strlen(s);
    for ( i = 0; i < len-1; i++)
    {
        for ( j = 0; j < len-1; j++)
        {
            if (s[j]>s[j+1])
            {
                temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }
            
            
        }
        
       
        
    }
    //printf("Sorted String: %s\n", s);

   for ( i = 0; i < len; i++)
   {
     if (s[i]!=s[i+1])
    {
        count++;
    }
   }
   
    
    if (count%2==0)
    {
        printf("CHAT WITH HER!\n");
    }
    else
    {
        printf("IGNORE HIM!\n");
    }
    
    
    
    
    return 0;
}
