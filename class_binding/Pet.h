
#include<string>

class Pet {
public:
    Pet(const std::string &name) : name(name){
    }

    void setName(const std::string &name_){ 
      name = name_;
    }

    const std::string &getName() const {
      return name;
    }

    std::string name;
};
