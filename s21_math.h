#ifndef SRC_S21_MATH_H_
#define SRC_S21_MATH_H_

#include <float.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define S21_PI_12 (S21_PI / 12.F)
#define S21_PI_6 (S21_PI / 6.F)
#define S21_PI_2 (S21_PI / 2.F)
#define S21_PI_4 (S21_PI / 4.F)
#define S21_SQRT_3 ((float)1.732050807569)
#define S21_EPS 1e-25
#define TEST_EPS 1e-6l
#define S21_INF __builtin_huge_valf()
#define S21_NAN __builtin_nanf("0x7fc00000")
#define S21_INFU -3.0 / 0.0
#define IS_S21_NAN(x) (x != x)

#define S21_NEGZERO -0.0

#define S21_E 2.718281828459045
#define S21_PI 3.141592653589793
#define S21_ASIN_EPS 1e-16l
#define S21_SQRT_EPS 1e-20l
#define s21_EPS 1e-17
#define s21_LN10 2.30258509299404590109

#define TAN_A 0.0776509570923569
#define TAN_B -0.287434475393028
#define TAN_C (S21_PI_4 - TAN_A - TAN_B)

/*  вычисляет абсолютное значение целого числа */
int s21_abs(int x);
/*  вычисляет арккосинус */
long double s21_acos(double x);
/*  вычисляет арксинус */
long double s21_asin(double x);
/*  вычисляет арктангенс */
long double s21_atan(double x);
/*  возвращает ближайшее целое число, не меньшее заданного значения */
long double s21_ceil(double x);
/*  вычисляет косинус */
long double s21_cos(double x);
/*  возвращает значение e, возведенное в заданную степень */
long double s21_exp(double x);
/*  вычисляет абсолютное значение числа с плавающей точкой */
long double s21_fabs(double x);
/*  возвращает ближайшее целое число, не превышающее заданное значение */
long double s21_floor(double x);
/*  остаток операции деления с плавающей точкой */
long double s21_fmod(double x, double y);
/*  вычисляет натуральный логарифм */
long double s21_log(double x);
/*  возводит число в заданную степень */
long double s21_pow(double base, double exp);
/*  вычисляет синус */
long double s21_sin(double x);
/*  вычисляет квадратный корень */
long double s21_sqrt(double x);
//  вычисляет тангенс */*
long double s21_tan(double x);
// вычисляе тфактриал
long double s21_factorial(int i);
/*Возвращает экспоненту*/
double s21_frexp(double x, int *e);
// возвращает +1, 0 , 1
int s21_sgn(double x);
//
int s21_isnan(double x);
//
int s21_isinf(double x);
#endif  //  SRC_S21_MATH_H_