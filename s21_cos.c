#include <math.h>

#include "s21_math.h"

long double s21_cos(double x) {
  long double res = 0;
  if (IS_S21_NAN(x) || s21_fabs(x) == S21_INF)
    res = S21_NAN;
  else {
    if (x > 0) {
      long double p = s21_fmod(x, S21_PI * 2);
      if (p <= S21_PI) {
        for (int i = 0; i < 11; i++) {
          res += (pow(-1, i) * pow(p, 2 * (i))) / s21_factorial(2 * i);
        }
      } else {
        p -= S21_PI;
        for (int i = 0; i < 11; i++) {
          res += (pow(-1, i) * pow(p, 2 * (i))) / s21_factorial(2 * i);
        }
        res = -res;
      }
    } else if (x < 0) {
      x = -x;
      long double p = s21_fmod(x, S21_PI * 2);
      if (p <= S21_PI) {
        for (int i = 0; i < 11; i++) {
          res += (pow(-1, i) * pow(p, 2 * (i))) / s21_factorial(2 * i);
        }
      } else {
        p -= S21_PI;
        for (int i = 0; i < 11; i++) {
          res += (pow(-1, i) * pow(p, 2 * (i))) / s21_factorial(2 * i);
        }
        res = -res;
      }
    } else
      res = 1;
  }
  //     long double res = 0.0L;
  // if (IS_S21_NAN(x) || s21_fabs(x) == S21_INF)
  //          res = S21_NAN;
  // else {
  // res = s21_sqrt(1 - s21_sin(x) * s21_sin(x));

  // long double p = s21_fmod(x,S21_PI*2);
  // if (p >= S21_PI / 2.0 && p <= S21_PI * 1.5)
  //     res = -res;
  // }
  return res;
}
