#include "s21_math.h"

long double s21_ceil(double x) {
  long double res = x;
  int e = 0;
  double y = s21_frexp(x, &e);
  (void)y;
  if (IS_S21_NAN(x))
    res = S21_NAN;
  else if (x == S21_INF)
    res = S21_INF;
  else if (x == -S21_INF)
    res = -S21_INF;
  else if (e > 62)
    res = x;
  else {
    if (x - (long int)x > 0)
      res = (long double)((long int)(x + 1));
    else if (x - (long int)x < 0)
      res = (long double)((long int)(x));
  }
  return res;
}