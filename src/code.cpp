#include "cpp11/doubles.hpp"

[[cpp11::register]]
cpp11::doubles times_two_cpp11(cpp11::writable::doubles x) {
  for (int i = 0; i < x.size(); ++i) {
    x[i] = x[i] * 2;
  }
  return x;
}
