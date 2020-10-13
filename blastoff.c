#include <stdio.h>

int main(void) {

  const int blastoff = 10;

  int loopnum = blastoff;

  while (loopnum >= 0) {
    printf("%d\n", loopnum);
    loopnum--;
    if (loopnum == -1) {
      printf("BLAST OFF.\n");
    }
  }
  return 0;
}
