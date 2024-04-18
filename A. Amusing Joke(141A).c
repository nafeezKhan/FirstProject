#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    int i,j,len1,len2,temp;
    char s1[101];
    char s2[101];
    char s3[101];
    scanf("%s",s1);
    scanf("%s",s2);
    scanf("%s",s3);
    strcat(s1,s2);
    len1=strlen(s1);
    len2=strlen(s3);
    for ( j = 0; j < len1-1; j++)
    {
        for ( i = 0; i < len1-1; i++)
        {
            if (s1[i]>s1[i+1])
            {
                temp=s1[i];
                s1[i]=s1[i+1];
                s1[i+1]=temp;
            }
            
        }
        
    }
    for ( j = 0; j < len2-1; j++)
    {
        for ( i = 0; i < len2-1; i++)
        {
            if (s3[i]>s3[i+1])
            {
                temp=s3[i];
                s3[i]=s3[i+1];
                s3[i+1]=temp;
            }
            
        }
        
    }
    if (strcmp(s1,s3)==0)
    {
       printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    
    
    

    
    

    return 0;
}
