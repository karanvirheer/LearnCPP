#include <iostream>
#include <ostream>

int main() {
  int x = 0;

  if (x == 5) {
    std::cout << "x is 5" << std::endl;
  } else {
    std::cout << "x is not 5" << std::endl;
  }

  for (int i = 0; i < 10; i++) {
    x += 1;
  }

  std::cout << "Hello World" << std::endl;
  return 0;
}
