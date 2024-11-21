#ifndef STACK_H_
#define STACK_H_

typedef struct Stack Stack;

/*
 * Allocates a generic stack with a predefined number of element slots
 */
Stack *stack_alloc(int size);

void stack_free(Stack *stack);

int stack_is_empty(Stack *stack);

int stack_is_full(Stack *stack);

/*
 * Pushes a memory address to the stack
 */
void stack_push(Stack *stack, void *element);

/*
 * Pops the last inserted memory address
 */
void *stack_pop(Stack *stack);

/*
 * Will call the printer function to each generic element in the stack
 */
void stack_print(Stack *stack, void (*printer_fn)(void *));

#endif
