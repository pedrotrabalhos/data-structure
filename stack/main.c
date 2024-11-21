#include "../utils/utils.h"
#include "stack.h"
#include <stdio.h>

int main(void) {
  Stack *stack = stack_alloc(10);

  stack_push(stack, generate_int_ptr(10));
  stack_push(stack, generate_int_ptr(20));
  stack_push(stack, generate_int_ptr(30));
  stack_push(stack, generate_int_ptr(40));

  stack_print(stack, print_int);

  int popped_value, idx;

  for (idx = 0; idx < 4; idx++) {
    popped_value = (*(int *)stack_pop(stack));
    printf("Popped: %d\n", popped_value);
  }

  printf("Attempting to pop:\n");

  void *address = stack_pop(stack);

  printf("Popped: %p\n", address);

  return 1;
}
