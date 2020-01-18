
// Directions
// Add 3 private member variables to the class:
// Name
// Grade (e.g. 9th grade)
// Grade Point Average
// Write a public constructor function to set the private attributes.
// Create public member functions to set each of the member variables. Before setting the values verify that:
// Grade is from 0 (kindergarten) to 12
// GPA is from 0.0 to 4.0
// The function must either throw an exception if any of the invariants are violated
// Within the main() (outside of the class), declare an object of type Student and test out each of the member function calls.

#include <cassert>
#include <stdexcept>

// TODO: Define "Student" class
class Student {
 public:
  // constructor
  Student(std::string name , int grade , float gpa) 
  : name_(name) , grade_(grade) , GPA_(gpa)  
  { 
      ValidatGrade(); 
      ValidatGPA(); 
}
  // accessors
  std::string Name() { return name_ ; }
  int Grade() { return GPA_ ; }
  float GPA() { return GPA_ ; }

  // mutators
  void Name(std::string name) { name_ = name; }
  void Grade(int g) {grade_ = g; }
  void GPA(int gpa) { GPA_ = gpa; }

 private:
  std::string name_;
  int grade_;
  float GPA_;
  void ValidatGrade()
  {
      if (grade_ <= 0 || grade_ > 12 )
        throw std::invalid_argument("invalid grade");
  }
  void ValidatGPA()
  {
      if (GPA_ <= 0 || GPA_ > 4 )
        throw std::invalid_argument("invalid GPA");
  }
};

// TODO: Test
int main() 
{
    Student firstStudent("Abbas Kamil" , 10 , 4.0);

    assert(firstStudent.Name() == "Abbas Kamil");
    assert(firstStudent.Grade() == 10);
    assert(firstStudent.GPA() == 4.0);
}