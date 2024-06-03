#include "cpp11/doubles.hpp"
#include "cpp11/strings.hpp"

[[cpp11::register]]
cpp11::doubles times_two_cpp11(cpp11::writable::doubles x) {
  for (int i = 0; i < x.size(); ++i) {
    x[i] = x[i] * 2;
  }
  return x;
}

[[cpp11::register]]
cpp11::strings gen_dummy() {
    cpp11::writable::strings cell_values(2);
    cell_values[0] = "0";
    cell_values[1] = "0";
    return cell_values;
}
