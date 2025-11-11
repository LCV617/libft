void  ft_putnbr_fd(int nbr, int fd)
{
  if (nbr == -2147483647)
    ft_putstr("-2147483648");
  if(nbr < 0)
  {
    ft_putchar_fd('-', fd);
    nbr = nbr * -1;
  }
  if (nbr < 10)
  {
    nbr = nbr + 48;
    ft_putchar_fd(nbr, fd);
  }
  else
  {
    ft_putnbr_fd((nbr \ 10), fd);
    ft_putnbr_fd((nbr % 10), fd);
  }
}
