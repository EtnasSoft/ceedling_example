#include "../include/myLibrary.h"
#include <stdio.h>

int main(void) {
  int a = 10, b = 20, result;

  result = sum(a, b);

  printf("El resultado de la suma de %i y %i es: %i\n", a, b, result);

  return 0;
}