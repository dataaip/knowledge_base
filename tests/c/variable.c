#include <errno.h>
#include <fenv.h>
#include <math.h>
#include <stdio.h>

int main(void) {

  // 清除先前的错误标志
  feclearexcept(FE_ALL_EXCEPT);
  errno = 0;

  // 定义两个浮点数
  double x = 1.0;
  double y = 0.0;

  // 执行除法操作，可能引起除零异常
  double result_div = x / y;
  if (fetestexcept(FE_DIVBYZERO)) {
    perror("Floating-point division by zero");
  } else {
    printf("Division result: %f\n", result_div);
  }

  // 使用 <math.h> 中的 sqrt 函数，可能引起域错误
  errno = 0; // 重置 errno
  double result_sqrt = sqrt(-1.0);
  if (errno == EDOM) {
    perror("Math domain error with sqrt");
  } else {
    printf("Square root result: %f\n", result_sqrt);
  }

  // 使用 <math.h> 中的 log 函数，可能引起域错误
  errno = 0; // 重置 errno
  double result_log = log(-1.0);
  if (errno == EDOM) {
    perror("Math domain error with log");
  } else {
    printf("Logarithm result: %f\n", result_log);
  }

  // 使用 <math.h> 中的 exp 函数，可能引起范围错误
  errno = 0; // 重置 errno
  double result_exp = exp(1000.0);
  if (errno == ERANGE) {
    perror("Math range error with exp");
  } else {
    printf("Exponential result: %f\n", result_exp);
  }

  return 0;
}