#include "mylib.h"
#include <iostream>
#include <sstream>

int cstr2int(char arg[]) {
  std::istringstream iss(arg);
  int result;
  if (!(iss >> result)) {
    std::cerr << "Invalid number: " << arg << '\n';
    throw std::invalid_argument("Invalid number.");
  } else if (!iss.eof()) {
    std::cerr << "Trailing characters after number: " << arg << '\n';
    throw std::invalid_argument("Trailing characters after number.");
  }
  return result;
}

int main(int argc, char *argv[]) {
  if (argc != 3) {
    std::cerr << "Wrong number of arguments.\n";
    return -1;
  }

  int nums[2];
  for (auto i = 0; i <=1; ++i) {
    nums[i] = cstr2int(argv[i+1]);
  }

  int result;
  result = mylib::add(nums[0], nums[1]);
  result = mylib::sub(nums[0], nums[1]);
/*#ifdef USE_EXTENSION
  result = mylib::mul(nums[0], nums[1]);
  result = mylib::div(nums[0], nums[1]);
#endif*/

  return 0;
}
