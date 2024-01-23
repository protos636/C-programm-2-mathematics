#include "s21_math.h"

long double s21_pow(double x, double y) {
  long double res;
  if (y == 0 || x == 1 || (x == -1 && y == S21_INF))
    res = 1;
  else if (IS_S21_NAN(x))
    res = S21_NAN;
  else if (s21_fabs(x) < 1 && s21_fabs(x) > 0 && y == S21_INF)
    res = 0.0;
  else if (s21_fabs(x) < 1 && s21_fabs(x) > 0 && y == -S21_INF)
    res = S21_INF;
  else if (y == S21_INF && x != 1.0 && x != -1.0)
    res = S21_INF;
  else if ((x < 0 && ((y - (int)y != 0))) || IS_S21_NAN(x) || IS_S21_NAN(y))
    res = S21_NAN;
  else if (y == -S21_INF)
    res = 0;

  else {
    if (x < 0) {
      x *= -1;
      res = s21_exp(y * s21_log(x));
      if ((long int)y % 2 != 0) res *= -1;
    } else {
      res = s21_exp(y * s21_log(x));
    }
  }
  return res;
}
