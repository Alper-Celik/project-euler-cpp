
#include <format>
#include <iostream>
#include <stdexcept>
long Fibonacci(long num) {
  if (num < 0) {
    throw std::invalid_argument(std::format("can't get Fibonacci of {}", num));
  }
  if (num == 0 || num == 1)
    return num;
  return Fibonacci(num - 1) + Fibonacci(num - 2);
}

int main() {
  long i = 1;
  long sum = 0;
  while (true) {
    long fib = Fibonacci(i);
    if (fib >= 4000000)
      break;

    if (fib % 2 == 0)
      sum += fib;

    i++;
  }
  std::cout << sum << std::endl;
}
