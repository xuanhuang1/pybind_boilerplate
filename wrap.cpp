#include <pybind11/pybind11.h>
#include "func.h"

namespace py = pybind11;

//using namespace pybind11::literals;

PYBIND11_MODULE(wrap, m) {
    m.def("add", &add, "A function which adds two numbers");
    m.def("mul", &mul, "A function which multiplies two numbers");
}
