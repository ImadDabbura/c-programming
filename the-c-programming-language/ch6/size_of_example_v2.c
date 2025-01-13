#include <stddef.h>
#include <stdio.h>

struct key {
  char *word;
  int count;
} keywords[] = {"imad", 4, "deema", 5};

int main() {
  printf("size of key structure : %lu\n", sizeof(struct key));
  printf("size of key object : %lu\n", sizeof keywords);
  printf("length of keywords : %lu\n", sizeof keywords / sizeof(struct key));
}
