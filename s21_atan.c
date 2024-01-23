#include <stdio.h>

#include "s21_math.h"

long double s21_atan(double x) {
  long double res = 0.0;
  if (x == S21_INF)
    res = S21_PI_2;
  else if (x == -S21_INF)
    res = -S21_PI_2;
  else if (IS_S21_NAN(x))
    res = x;
  else if (x == 1)
    res = S21_PI_4;
  else if (x == -1)
    res = -S21_PI_4;
  else {
    if (s21_abs(x) < 70.0 && s21_abs(x) > -70.0) {
      int is_in_range = (x > -1 && x < 1);
      res = is_in_range ? x : 1.0 / x;
      long double old_res = 0L;
      int i = 1;
      do {
        double a = s21_pow(-1, i);
        double b = s21_pow(x, (1 + 2 * i) * (is_in_range ? 1 : -1));
        double c = 1 + 2 * i;
        old_res = res;
        i++;
        res += a * b / c;
      } while (s21_fabs(old_res - res) > 1e-6);
      if (!is_in_range) res = (S21_PI * s21_fabs(x) / (2 * x)) - res;
    } else {
      res = S21_PI_2 * s21_sgn(x) - (4 * x) / (4 * x * x + 1);
    }
  }
  return res;
}
