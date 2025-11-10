int   ft_isprint(int c)
{
  if(c >= ' ' && c <= '~')
    return(1);
  else
    return(0);
}

#include <stdio.h>
int main()
{
  printf("%i", ft_isprint('e'));
  printf("%i", ft_isprint('4'));
  printf("%i", ft_isprint(' '));
  printf("%i", ft_isprint('Q'));
  printf("%i", ft_isprint('\n'));
}
