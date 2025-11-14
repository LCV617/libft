#include <stdio.h>
#include <stddef.h>

int ft_strlen(const char* src)
{
  int i = 0;
  while(src[i])
    i++;
  return(i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
  size_t i;

  i = 0;
  if (dstsize == 0)
    return (ft_strlen(src));
  while(src[i] && i < (dstsize - 1))
  {
    dst[i] = src[i];
    i++;
  }
  dst[i] = '\0';
  return (ft_strlen(src));


}

int main(void)
{
    char        dst[4];
    const char *src = "moi jsp";
    size_t      dstsize = sizeof(dst);
    size_t      r;

    r = ft_strlcpy(dst, src, dstsize);
    printf("dst = \"%s\"\n", dst);
    printf("return = %zu\n", r);
}
