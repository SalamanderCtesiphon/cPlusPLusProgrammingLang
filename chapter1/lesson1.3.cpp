#include <iostream>

/* int main()
{
  int width;
  width = 5;

  std::cout << width;

  width = 7;

  std::cout << width;

  return 0;
} */
/*
int main()
{
  int x{5};

  return 0;
} */

int main()
{
  [[maybe_unused]] double pi{3.14159};
  [[maybe_unused]] double gravity{9.8};
  [[maybe_unused]] double phi{1.61803};

  // the above variables will not generate unused variable warnings

  return 0;
}