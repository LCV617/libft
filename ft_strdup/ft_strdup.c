char*   ft_strdup(const char* str)
{
  int   i;
  char* dest;

  i = 0;
  dest = maloc(sizeof(char) * ft_strlen(str));
  while(str[i])
  {
    dest[i] = str[i];
    i++;
  }
  dest[i] = '\0';
  return(dest);
}


#include <stdio.h>
int   main()
{
  printf("%s", ft_strdup("salut"));
}
