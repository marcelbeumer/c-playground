#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

static uint32_t counter = 0;

uint32_t plus_one(uint32_t v) { return v + 1; }
uint32_t min_one(uint32_t v) { return v + 1; }
uint32_t twice(uint32_t v) { return v * 2; }
uint32_t (*modifiers[])(uint32_t v) = {plus_one, min_one, twice};

uint32_t retrieve(void) { return counter; }

enum modifier_name { PlusOne, MinOne, Twice };

uint32_t modify(int modifier) {
  uint32_t v = modifiers[modifier](counter);
  return v;
}

void increment(void) {
  counter++;
  printf("%d\n", counter);
}

int main(void) {
  for (int i = 0; i < 5; i++) {
    increment();
  }

  printf("retrieve counter: %d\n", retrieve());
  printf("modify counter: %d\n", modify(Twice));
  return EXIT_SUCCESS;
}
