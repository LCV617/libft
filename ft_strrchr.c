#include <stddef.h>

char *strchr(const char *s, int c)
{
  int i;
  char cc;
  char* res;

  cc = (char)c;
  res = NULL;
  i = 0;
  while(s[i])
  {
    if(s[i] == cc)
      res = ((char *) &s[i]);
    i++;
  }
  if (s[i] == cc)
        res = ((char *) &s[i]);

  return(res);
}


#include <stdio.h>

int main(void)
{
    const char *str = "Hello World";
    char *res;

    res = strchr(str, 'o');
    printf("Test 1: %s\n", res);
    return 0;
}
