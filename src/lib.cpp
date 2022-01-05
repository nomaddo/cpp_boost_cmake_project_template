#include "lib.hpp"

int32_t fact(int32_t n)
{
  if (n <= 1)
    return 1;

  int32_t r = 1;
  for (int i = 1; i <= n; i++)
  {
    r *= i;
  }
  return r;
}
