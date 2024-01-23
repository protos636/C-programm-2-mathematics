#include "s21_math.h"

long double s21_floor(double x) {
  long double res = x;

  if (IS_S21_NAN(x))
    res = S21_NAN;
  else if (x == S21_INF)
    res = S21_INF;
  else if (x == -S21_INF)
    res = -S21_INF;
  else {
    if (x < 0) {
      if (x - (int)x != 0) res = (long double)((long int)(x - 1));
    } else
      res = (long double)((long int)x);
  }
  return res;
}
