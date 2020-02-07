// Instructions
// Refactor class Sphere to move the volume calculation into a static function.
// Verify that the class still functions as intended.
// Make that static function public.
// Call that static function directly from main() to calculate the hypothetical volume of a sphere you have not yet instantiated.

#include <cassert>
#include <cmath>
#include <stdexcept>

class Sphere {
 public:
 static float Volume(int radius)
 {
     return pi_ * 4/3 * pow(radius,3);
 }
 private:
  static float constexpr pi_{3.14159};
};

// Test
int main(void) {
  assert(abs(Sphere::Volume(5) - 523.6) < 1);
}