#include <iostream>

int main()
{
  std::cout << "Enter and integer: ";

  int num{}; // define a variable num as an integer variable
  std::cin >> num;

  std::cout << "Double that number is: " << num * 2 << '\n';

  std::cout << "Triple that number is: " << num * 3 << '\n';

  return 0;
}
