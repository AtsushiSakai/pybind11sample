/**
 *  @brief sample code of pybind11
 */
#include <pybind11/pybind11.h>
#include "hoge.h"

namespace py = pybind11;

PYBIND11_PLUGIN(example){
  py::module m("example", "pybind11 example plugin");

  m.def("add", &add, "test1", py::arg("i") = 1, py::arg("j") = 2);

  m.attr("NUMBER") = py::cast(NUMBER);
  m.attr("NUMBER2") = py::cast(NUMBER2);
  m.attr("str") = py::cast(str);

  return m.ptr();
}

