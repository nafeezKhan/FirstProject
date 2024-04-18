#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    int t;
    scanf("%d", &t);
    char s1[4];
    int len,i,j,temp;
    while (t--)
    {
        scanf("%s", s1);
        strlwr(s1);
        len=strlen(s1);
        for ( j = 0; j <len-1; j++)
        {
            for ( i = 0; i <len-1; i++)
            {
                if (s1[i]>s1[i+1])
                {
                   temp=s1[i];
                   s1[i]=s1[i+1];
                   s1[i+1]=temp;
                }
                
            }
            
        }
        char s2[4]="esy";
        if (strcmp(s1,s2)==0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        

    }
    
    return 0;
}
