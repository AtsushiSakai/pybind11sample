/**
 *  @brief sample code of pybind11
 */
#include "Pet.h"
#include <pybind11/pybind11.h>

namespace py = pybind11;

PYBIND11_PLUGIN(cpplib) {
  py::module m("cpplib", "pybind11 example plugin");

  py::class_<Pet>(m, "Pet")
      .def(py::init<const std::string &, int>())
      .def("Set", (void (Pet::*)(int)) & Pet::Set)
      .def("Set", (void (Pet::*)(const std::string &)) & Pet::Set)
      .def_readwrite("name", &Pet::name_)
      .def_readwrite("age", &Pet::age_);

  return m.ptr();
}
