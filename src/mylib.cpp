#include "mylib.h"
#include <iostream>

int mylib::add(const int a, const int b) {
  const auto result = a + b;
  std::cout << "From lib-orig: " << a << " - " << b << " = " << result << '\n';
  return result;
}

#ifndef USE_EXTENSION
int mylib::sub(const int a, const int b) {
  const auto result = a - b;
  std::cout << "From lib-orig: " << a << " - " << b << " = " << result << '\n';
  return result;
}
#endif
