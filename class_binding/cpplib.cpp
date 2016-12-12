/**
 *  @brief sample code of pybind11
 */
#include <pybind11/pybind11.h>
#include "Pet.h"

namespace py = pybind11;

PYBIND11_PLUGIN(cpplib){
  py::module m("cpplib", "pybind11 example plugin");


  py::class_<Pet>(m, "Pet")
        .def(py::init<const std::string &>())
        .def("setName", &Pet::setName)
        .def("getName", &Pet::getName)
        .def_static("getClassName", &Pet::getClassName);

  return m.ptr();
}

