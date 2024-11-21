#include "stack.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct Stack {
  int size;
  void **elements;
  int top_idx;
} Stack;

void stack_log(const char *message) { printf("[stack.c] %s\n", message); }

Stack *stack_alloc(int size) {
  Stack *stack = (Stack *)malloc(sizeof(Stack));
  stack->size = size;
  stack->elements = (void **)malloc(sizeof(void *) * size);
  stack->top_idx = -1;
  return stack;
}

int stack_is_full(Stack *stack) { return stack->size == (stack->top_idx - 1); }

int stack_is_empty(Stack *stack) { return stack->top_idx == -1; }

void stack_push(Stack *stack, void *element) {
  if (stack_is_full(stack)) {
    stack_log("Cannot push, stack is full.");
    return;
  }

  stack->top_idx++;
  stack->elements[stack->top_idx] = element;
}

void *stack_pop(Stack *stack) {
  if (stack_is_empty(stack)) {
    stack_log("Cannot pop empty stack");
    return NULL;
  }
  void *popped_element = stack->elements[stack->top_idx];
  stack->top_idx--;
  return popped_element;
}

void stack_print(Stack *stack, void (*printer_fn)(void *)) {
  if (stack_is_empty(stack)) {
    stack_log("Stack is empty");
    return;
  }

  stack_log("Stack content:");

  int idx;
  for (idx = stack->top_idx; idx >= 0; idx--) {
    printer_fn(stack->elements[idx]);
    printf("\n");
  }
}
