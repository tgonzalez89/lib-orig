#pragma once

/*#ifdef USE_EXTENSION
#include "mylib-e.h"
#endif*/

namespace mylib {
  int add(const int, const int);
//#ifndef USE_EXTENSION
  int sub(const int, const int);
//#endif
}
