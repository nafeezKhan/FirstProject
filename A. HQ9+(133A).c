#include <stdio.h>
#include <string.h>

int main() {
  char s[101];
  scanf("%s", s);
  
  int len = strlen(s);
  int i, found = 0;
  
  for( i=0; i<len; i++)
   {
    if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9')
     {
      found = 1;
      break;
    }
  }
  
  if(found) 
  {
    printf("YES\n");  
  }
  else 
  {
    printf("NO\n");
  }
  
  return 0; 
}