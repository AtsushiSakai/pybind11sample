/**
 *  @brief sample code of pybind11
 */
#include <pybind11/pybind11.h>

int add(int i,int j){
  return i+j;
}

namespace py = pybind11;

PYBIND11_PLUGIN(example){
  py::module m("example", "pybind11 example plugin");

  m.def("add", &add, "test1");

  return m.ptr();
}

