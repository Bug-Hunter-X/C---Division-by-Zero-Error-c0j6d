#include <iostream>

int main() {
  int x = 5;
  int y = 0;
  int z = 0;

  if (y == 0) {
    std::cerr << "Error: Division by zero!";
    return 1; // Indicate an error
  } else {
    z = x / y;
    std::cout << "Result: " << z << std::endl;
  }

  return 0;
}
