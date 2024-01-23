#include "s21_math.h"

long double s21_sqrt(double x) {
  long double res;
  if (x < 0 || IS_S21_NAN(x)) {
    res = S21_NAN;
  } else if (x == S21_INF || x <= S21_SQRT_EPS) {
    res = x;
  } else {
    res = s21_pow(x, (double)1.0 / (double)2.0);
  }
  return res;
}