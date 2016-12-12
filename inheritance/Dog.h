
#include "Pet.h"
#include <string>

class Dog : public Pet {
public:
  Dog(const std::string &name) : Pet(name) {}

  std::string Bark() const { return "wan"; }
};
