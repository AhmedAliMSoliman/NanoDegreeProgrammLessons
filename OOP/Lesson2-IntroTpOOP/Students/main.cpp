// Directions
// 1. Add 3 private member variables to the class:
// Name // Grade (e.g. 9th grade) // Grade Point Average
// 2. Write a public constructor function to set the private attributes.
// 3. Create public member functions to set each of the member variables. Before setting the values verify that:
// Grade is from 0 (kindergarten) to 12
// GPA is from 0.0 to 4.0
// The function must either throw an exception if any of the invariants are violated
// 4. Within the main() (outside of the class), declare an object of type Student and test out each of the member function calls.

#include <cassert>
#include <stdexcept>
#include <string>


// TODO: Define "Student" class
class Student 
{
 public:
  // constructor
  Student(std::string name , int grade , float gpa)
  :  name_(name) , grade_(grade) , GPA_(gpa)
  {
      Validate();
  }
  // accessors
  std::string Name() const
  {
      return name_;
  }
  int Grade() const
  {
      return grade_;
  }
  float GPA() const
  {
      return GPA_;
  }
  // mutators
  void Name(std::string name)
  {
      name_ = name;
      Validate();
  }
  void Grade(int grade)
  {
      grade_ = grade;
      Validate();
  }
  void GPA(int gpa)
  {
      GPA_ = gpa;
      Validate();
  }

 private:
  std::string name_;
  int grade_;
  float GPA_;
  void Validate()
  {
      // Grade 0 - 12 
      // GPA 0.0 - 4.0
      if (Grade() < 0 || Grade() > 12 || GPA() < 0.0 || GPA() > 4.0)
          throw std::invalid_argument("Out of limit");
  }
};

// TODO: Test
int main() 
{
    Student Ahmed("Ahmed Ali", 10, 4);

    // assert(Ahmed.Name() == "Ahmed Ali");
    // assert(Ahmed.Grade() == 10);
    // assert(Ahmed.GPA() == 4);

    bool caught{false};
    try 
    {
        Ahmed.Grade(10);
    }
    catch(...)
    {
        caught = true;
    }
    assert(caught);
}