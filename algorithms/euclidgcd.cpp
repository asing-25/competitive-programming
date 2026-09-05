#include <iostream>

int gcd(int a, int b)
{
  return b == 0 ? a : gcd(b, a % b); // Calculated the Gcd using recursive Method
}

int main()
{
  int num1, num2; // numbers use for input

  std::cout << "Enter a number: ";
  std::cin >> num1;
  std::cout << "Enter another number: ";
  std::cin >> num2;
  std::cout << "The GCD is: " << gcd(num1, num2) << "\n";

  return 0;
}
