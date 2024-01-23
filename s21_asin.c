#include "s21_math.h"

long double s21_asin(double x) {
  long double res = 0.0;
  if ((x > 1.F) || x < -1.F)
    res = S21_NAN;
  else if (IS_S21_NAN(x))
    res = S21_NAN;
  else {
    if (x < 1 && x > -1) res = s21_atan(x / (s21_sqrt(1 - x * x)));
    if (x == 1) res = S21_PI / 2;
    if (x == -1) res = -S21_PI / 2;
  }
  return res;
}
