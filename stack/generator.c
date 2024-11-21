#include "generator.h"

int *generate_int_ptr(int value) {
  int *int_ptr = (int *)malloc(sizeof(int));

  (*int_ptr) = value;

  return int_ptr;
}

float *generate_float_ptr(float value) {
  float *float_ptr = (float *)malloc(sizeof(float));

  (*float_ptr) = value;

  return float_ptr;
};
