#include <stdio.h>

char *ft_strupcase(char *str) {
  char *str2;

  str2 = str;
  while (*str != '\0') {
    if (*str >= 'a' && *str <= 'z') {
      *str -= 32;
    }
    str++;
  }

  return str2;
}
