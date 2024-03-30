#include <stdio.h>

int main() {

  int celsius;

  for (celsius = 0; celsius <= 300; celsius += 20) {
    printf("%3d %6.1f\n", celsius, (1.8 * celsius) + 32;
  }

  return 0;
}
