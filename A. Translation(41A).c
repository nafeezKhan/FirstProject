#include <stdio.h>
#include <string.h>

int main()
 {
  char s1[100];
  char s2[100]; 
  
  scanf("%s", s1);
  scanf("%s", s2);
  
  strrev(s1);
  
  if(strcmp(s2, s1) == 0) 
  {
    printf("YES\n");  
  }
  else 
  {
    printf("NO\n");
  }

  return 0;
}