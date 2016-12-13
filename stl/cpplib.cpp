/**
 *  @brief sample code of pybind11
 */
#include "stllib.h"
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

PYBIND11_PLUGIN(cpplib) {
  py::module m("cpplib", "pybind11 example plugin");

  m.def("append_1", &append_1);

  return m.ptr();
}
