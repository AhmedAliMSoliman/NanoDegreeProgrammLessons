#include <cassert>

class Foo {
 public:
  static int count;
  Foo() { Foo::count += 1; }
};

int Foo::count{0};

int main() {
  Foo f{};
  assert(Foo::count == 1);
}