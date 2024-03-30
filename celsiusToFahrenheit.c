#include <stdio.h>

#define UPPER 300
#define LOWER 0
#define STEP 20

int main() {

  int celsius;

  for (celsius = LOWER; celsius <= UPPER; celsius += STEP) {
    printf("%3d %6.1f\n", celsius, (1.8 * celsius) + 32);
  }

  return 0;
}
