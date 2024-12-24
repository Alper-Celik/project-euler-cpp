#include <iostream>

bool can_divided_up_to(long num, int biggest_divider) {

  for (int i = 1; i <= biggest_divider; i++) {
    if (num % i != 0) {
      return false;
    }
  }
  return true;
}

int main() {
  int biggest_divider = 20;

  long num = 1;

  while (!can_divided_up_to(num, biggest_divider)) {
    num++;
  }

  std::cout << num << "\n";
}