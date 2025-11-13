
#include <stddef.h>

char *strchr(const char *s, int c)
{
  int i;
  char cc;

  cc = (char)c;

  i = 0;
  while(s[i])
  {
    if(s[i] == cc)
      return((char *) &s[i]);
    i++;
  }
  if (s[i] == cc)
        return ((char *) &s[i]);

  return(NULL);
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
