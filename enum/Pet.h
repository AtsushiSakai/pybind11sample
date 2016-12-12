
#include <string>

class Pet {
public:
  enum Kind { Dog = 0, Cat };

  Pet(const std::string &name, Kind type) : name_(name), type_(type) {}

  std::string name_;
  Kind type_;
};
