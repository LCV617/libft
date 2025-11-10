int ft_putendl_fd(char* str, int fd)
{
  int i;

  i = 0;
  while(str[i])
  {
    ft_putchar_fd(str[i], fd);
    i++;
  }
  ft_putchar_fd('\n', fd)
}
