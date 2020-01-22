// Exercise: Class Template
// Classes are the building blocks of object oriented programming in C++. Templates support the creation of generic classes!
// Class templates can declare and implement generic attributes for use by generic methods. These templates can be very 
// useful when building classes that will serve multiple purposes.
// In this exercise you will create a class Mapping that maps a generic key to a generic value.
// All of the code has been written for you, except the initial template specification.
// In order for this template specification to work, you will need to include two generic types: KeyName and ValueName. 
//Can you imagine how to do that?

// Instructions
// Write the template specification.
// Verify that the test passes.

#include <assert.h>
#include <string>
#include <sstream>

// TODO: Add the correct template specification

template <typename KeyType, typename ValueType>
class Mapping {
public:
  Mapping(KeyType key, ValueType value) : key(key), value(value) {}
  std::string Print() const {
    std::ostringstream stream;
    stream << key << ": " << value;
    return stream.str();
  }
  KeyType key;
  ValueType value;
};

// Test
int main() {
  Mapping<std::string, int> mapping("age", 20);
  assert(mapping.Print() == "age: 20");
}