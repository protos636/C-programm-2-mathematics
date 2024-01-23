#include "s21_math.h"

long double s21_sin(double x) {
  long double result;

  if (IS_S21_NAN(x) || x == S21_INF) {
    result = S21_NAN;
  } else {
    x = s21_fmod(x, 2 * S21_PI);

    int i = 1;
    long double numerator = x;
    long double divisor = 1.0L;
    long double div_result = 1.0L;
    result = x;

    while (s21_fabs(div_result) > LDBL_EPSILON) {
      divisor *= ((2 * i) * (2 * i + 1));
      numerator *= -1 * x * x;
      div_result = numerator / divisor;
      result += div_result;
      i++;
    }
  }
  return result;
}