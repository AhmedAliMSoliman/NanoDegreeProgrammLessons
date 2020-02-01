#include <assert.h>
#include <string>

// TODO: Define class Person
  // TODO: Define a public constructor with an initialization list
  // TODO: Define a public member variable: name
class Person
{
public:
    Person(std::string name_);
    std::string name;
};

Person::Person(std::string name_) : name(name_) {}


// Test
int main() {
  Person alice("Alice");
  Person bob("Bob");
  assert(alice.name != bob.name);
}