#include <iostream>

long d(long num) {
  long sum = 0;
  for (long i = 1; i < num; i++) {
    if (num % i == 0) {
      sum += i;
    }
  }
  return sum;
};

int main() {
  long sum = 0;
  for (long i = 1; i < 10000; i++) {
    if (d(d(i)) == i && d(i) != i)
      sum += i;
  }
  std::cout << sum << std::endl;
}