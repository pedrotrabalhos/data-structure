#include "utils.h"

int *generate_int_ptr(int value) {
  int *int_ptr = (int *)malloc(sizeof(int));
  if (int_ptr != NULL) {
    *int_ptr = value;
  }
  return int_ptr;
}

float *generate_float_ptr(float value) {
  float *float_ptr = (float *)malloc(sizeof(float));
  if (float_ptr != NULL) {
    *float_ptr = value;
  }
  return float_ptr;
}

char *generate_char_ptr(char value) {
  char *char_ptr = (char *)malloc(sizeof(char));
  if (char_ptr != NULL) {
    *char_ptr = value;
  }
  return char_ptr;
}

char *generate_string_ptr(const char *value) {
  if (value == NULL)
    return NULL;
  char *string_ptr = (char *)malloc(strlen(value) + 1);
  if (string_ptr != NULL) {
    strcpy(string_ptr, value);
  }
  return string_ptr;
}

void print_int(void *element) {
  if (element != NULL) {
    printf("%d", *(int *)element);
  }
}

void print_float(void *element) {
  if (element != NULL) {
    printf("%f", *(float *)element);
  }
}

void print_char(void *element) {
  if (element != NULL) {
    printf("%c", *(char *)element);
  }
}

void print_string(void *element) {
  if (element != NULL) {
    printf("%s", (char *)element);
  }
}
