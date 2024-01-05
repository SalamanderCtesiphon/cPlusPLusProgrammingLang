#include <iostream>

int main()
{
  std::cout << "Enter and integer: ";

  int num{}; // define a variable num as an integer variable
  std::cin >> num;

  num *= 2;

  std::cout << "Double that number is: " << num << '\n';

  return 0;
}
