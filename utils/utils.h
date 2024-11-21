#ifndef UTILS_H
#define UTILS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *generate_int_ptr(int value);
float *generate_float_ptr(float value);
char *generate_char_ptr(char value);
char *generate_string_ptr(const char *value);

void print_int(void *element);
void print_float(void *element);
void print_char(void *element);
void print_string(void *element);

#endif
