#include "s21_math.h"

long double s21_fmod(double x, double y) {
  long double res = 0;
  if (IS_S21_NAN(x) || y == 0 || IS_S21_NAN(y) || x == S21_INF)
    res = S21_NAN;
  else if (y == -S21_INF)
    res = x;
  else if (y == S21_INF)
    res = x;
  else
    res = x - s21_floor(x / y) * y;
  return res;
}
