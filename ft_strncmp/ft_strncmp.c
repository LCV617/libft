int ft_strncmp(char* str1, char* str2)
{
  int i = 0;
  while(str1[i] || str2[i])
  {
    if(str1[i] != str2[i])
      return(str1[i] - str2[i]);
    i++;
  }
  return(0);
}

#include <stdio.h>
int main(void)
{
  char* str1 = "salut";
  char* str2 = "salutt";
  printf("%i", ft_strncmp(str1, str2));
}
