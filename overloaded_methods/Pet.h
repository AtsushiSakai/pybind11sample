
#include <string>

class Pet {
public:
  Pet(const std::string &name, int age) : name_(name), age_(age) {}

  void Set(const std::string &name) { name_ = name; }
  void Set(int age) { age_ = age; }

  std::string name_;
  int age_;
};
