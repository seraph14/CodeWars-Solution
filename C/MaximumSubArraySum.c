#include <stddef.h>

int maxSequence(const int* array, size_t n) {

    // <---- hajime!
  if ((int) n == 0) return 0;
  int max_global = array[0], max_current = array[0];
  for (int i = 1; i < (int) n; i++) {
    max_current = array[i] > max_current + array[i]? array[i]: max_current + array[i];
    if (max_global < max_current) max_global = max_current;
  } return max_global > 0 ? max_global : 0;

}
