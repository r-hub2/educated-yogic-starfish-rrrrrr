// Generated by cpp11: do not edit by hand
// clang-format off


#include "cpp11/declarations.hpp"
#include <R_ext/Visibility.h>

// code.cpp
cpp11::doubles times_two_cpp11(cpp11::writable::doubles x);
extern "C" SEXP _rrrrrr_times_two_cpp11(SEXP x) {
  BEGIN_CPP11
    return cpp11::as_sexp(times_two_cpp11(cpp11::as_cpp<cpp11::decay_t<cpp11::writable::doubles>>(x)));
  END_CPP11
}
// code.cpp
cpp11::strings gen_dummy();
extern "C" SEXP _rrrrrr_gen_dummy() {
  BEGIN_CPP11
    return cpp11::as_sexp(gen_dummy());
  END_CPP11
}

extern "C" {
static const R_CallMethodDef CallEntries[] = {
    {"_rrrrrr_gen_dummy",       (DL_FUNC) &_rrrrrr_gen_dummy,       0},
    {"_rrrrrr_times_two_cpp11", (DL_FUNC) &_rrrrrr_times_two_cpp11, 1},
    {NULL, NULL, 0}
};
}

extern "C" attribute_visible void R_init_rrrrrr(DllInfo* dll){
  R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);
  R_forceSymbols(dll, TRUE);
}
