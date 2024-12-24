// not very efficient but fast enough to solve the problem
#include <iostream>
bool is_prime(long num) {
  for (long i = 2; i < num; i++) {
    if (num % i == 0)
      return false;
  }
  return true;
}

long next_prime(long num) {
  while (true) {
    num++;
    if (is_prime(num))
      break;
  }
  return num;
}

long largest_prime_of(long num) {
  long largestprime = 2;

  while (true) {
    if (num % largestprime == 0) {
      num = num / largestprime;
    } else {
      largestprime = next_prime(largestprime);
    }

    if (num == 1)
      break;
  }

  return largestprime;
}
int main() { std::cout << largest_prime_of(600851475143) << "\n"; }
