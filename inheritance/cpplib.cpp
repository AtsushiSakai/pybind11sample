/**
 *  @brief sample code of pybind11
 */

#include "Dog.h"
#include <pybind11/pybind11.h>

namespace py = pybind11;

PYBIND11_PLUGIN(cpplib) {
  py::module m("cpplib", "pybind11 example plugin");

  py::class_<Pet>(m, "Pet")
      .def(py::init<const std::string &>())
      .def_readwrite("name", &Pet::name);

  py::class_<Dog, Pet>(m, "Dog")
      .def(py::init<const std::string &>())
      .def("Bark", &Dog::Bark);

  return m.ptr();
}
