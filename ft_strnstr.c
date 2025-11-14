#include <stddef.h>
#include <stdio.h>

char *strnstr(const char *haystack, const char *needle, size_t len)
{

}


int main(void)
{
  const char* haystack = "salut toi";
  const char* needle = "toi";
  size_t len = 10;
  printf("%s", strnstr(haystack, needle, len));
}
