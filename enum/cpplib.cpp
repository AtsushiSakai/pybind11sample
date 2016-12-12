/**
 *  @brief sample code of pybind11
 */
#include "Pet.h"
#include <pybind11/pybind11.h>

namespace py = pybind11;

PYBIND11_PLUGIN(cpplib) {
  py::module m("cpplib", "pybind11 example plugin");

  py::class_<Pet> pet(m, "Pet");

  pet.def(py::init<const std::string &, Pet::Kind>())
      .def_readwrite("name", &Pet::name_)
      .def_readwrite("type", &Pet::type_);

  py::enum_<Pet::Kind>(pet, "Kind")
      .value("Dog", Pet::Kind::Dog)
      .value("Cat", Pet::Kind::Cat)
      .export_values();

  return m.ptr();
}
