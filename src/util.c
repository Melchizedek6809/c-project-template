#include <stdio.h>
#include <string.h>

char *getInput() {
  static char buffer[256];
  if (fgets(buffer, sizeof(buffer), stdin) != NULL) {
      buffer[strcspn(buffer, "\n")] = 0;
      return buffer;
  }
  return NULL;
}
