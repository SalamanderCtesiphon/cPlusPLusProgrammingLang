#include <iostream>

int getValueFromUser()
{
  std::cout << "Enter an integer: ";
  int input{};
  std::cin >> input;

  return input;
}

void printDouble()
{
  int num{getValueFromUser()};
  std::cout << num << " doubled is: " << num * 2 << '\n';
}

int main()
{
  printDouble();

  return 0;
}