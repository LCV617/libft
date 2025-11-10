int   ft_isascii(int c)
{
  if(c >= 0 && c <= 127)
    return(1);
  else
    return(0);
}

#include <stdio.h>
int main()
{
  printf("%i", ft_isascii('e'));
  printf("%i", ft_isascii('4'));
  printf("%i", ft_isascii(' '));
  printf("%i", ft_isascii('Q'));
  printf("%i", ft_isascii('\n'));
}
