#include <stddef.h>
#include <stdio.h>

char *series_sum(const size_t n) {
  float sum = 0.0f; int i = 0;
  char *result = (char *) malloc(n);
  while (i < (int) n) {
    sum += 1.0f / (1 + (i*3));
    i++;
  } 
  sprintf(result, "%.2f", sum);
  return result;
}
