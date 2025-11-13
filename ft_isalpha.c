int   ft_isalpha(int c)
{
  if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
    return(1);
  else
    return(0);
}

#include <stdio.h>
int main()
{
  printf("%i", ft_isalpha('e'));
  printf("%i", ft_isalpha('4'));
  printf("%i", ft_isalpha(' '));
  printf("%i", ft_isalpha('Q'));
  printf("%i", ft_isalpha('\n'));
}
