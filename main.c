#include <stdio.h>
char *ft_strupcase(char *str);

int main() {
  char tab[] = "amazon!!!!!\0";
  printf("%s\n", ft_strupcase(tab));
  return 0;
}
