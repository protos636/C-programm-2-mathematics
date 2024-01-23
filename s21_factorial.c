#include "s21_math.h"

long double s21_factorial(int i) {
  long double k = 1.0L;
  if (i != 0) {
    for (int j = 1; j <= i; j++) {
      k *= j;
    }
  }
  return k;
}

double s21_frexp(double x, int *e) {
  union {
    double real_number;
    struct {
      unsigned mantis1 : 32;
      unsigned mantis2 : 20;
      unsigned exponent : 11;
      unsigned sing : 1;
    } bits;
  } number;

  if (x) {
    number.real_number = x;
    *e = number.bits.exponent - 1023;
    number.bits.exponent = 1023;

    return number.real_number;
  } else {
    *e = 0;
    return 0.0;
  }
}

int s21_sgn(double x) {
  int res = 0;
  if (x > 0) res = 1;
  if (x < 0) res = -1;
  return res;
}