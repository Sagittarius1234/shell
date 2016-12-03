#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  int i,secs;
  char* topr;
  if (argc != 3) {
    fprintf(stderr, "Usage: %s <n> <c>\n",argv[0]);
  }
  secs = atoi(argv[1]);
  topr = argv[2];
  for (i=0; i<secs; i++) {
    printf("%s",topr);
    fflush(stdout);
    sleep(1);
  }
  exit(0);
}
