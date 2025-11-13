int   ft_isalnum(int c)
{
  if((c >= '0' && c <= '9') || ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')))
    return(1);
  else
    return(0);
}

#include <stdio.h>
int main()
{
  printf("%i", ft_isalnum('e'));
  printf("%i", ft_isalnum('4'));
  printf("%i", ft_isalnum(' '));
  printf("%i", ft_isalnum('Q'));
  printf("%i", ft_isalnum('\n'));
}
