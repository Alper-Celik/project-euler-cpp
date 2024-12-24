// so i cant have 8 digit numbers, https://euler.stephan-brumme.com/34/ thanks

#include <algorithm>
#include <cmath>
#include <functional>
#include <iostream>
#include <iterator>
#include <numeric>
#include <ostream>
#include <ranges>
#include <vector>

long factorial(long num) {
  if (num == 0 || num == 1) {
    return 1;
  }
  return num * factorial(num - 1);
}

bool is_curios_number(long num) {
  std::vector<short> digits;
  digits.reserve(10);
  auto _num = num;
  while (_num != 0) {
    digits.push_back(_num % 10);
    _num = _num / 10;
  }

  using namespace std::ranges::views;
  auto _ = std::ranges::fold_left(digits | transform(factorial), 0,
                                  std::plus<long>());
  return (num == _);
};

int main() {
  long sum = 0;
  for (long i = 3; i < std::pow(10, 7); i++) {
    if (is_curios_number(i))
      sum += i;
  }
  std::cout << sum << std::endl;
}