// Booleans
/* void f(int a, int b)
{
  bool b1 = a == b;
} */

// by definition true has the value of 1 and false has the value of 0

/* #include <iostream>

int main()
{
  std::cout << "Here is some text.";
  return 0;
} */

/* #include <iostream>
#include <vector>
#include <string>

using namespace std; */

/* int main()
{
  vector<string> msg{"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

  for (const string &word : msg)
  {
    cout << word << " ";
  }
  cout << endl;
} */
/* #include <array>
#include <iostream>
#include <span>

struct Foo
{
  int a{};
  int b{};
  int c{};
};

consteval int sum(std::span<const int> a) // std::span and consteval
{
  int s{0};
  for (auto n : a)
    s += n;
  return s;
}

auto sum(auto x, auto y) -> decltype(x + y) // abbreviated function templates
{
  return x + y;
}

int main()
{
  constexpr std::array a{3, 2, 1};
  constexpr int s{sum(a)};
  std::cout << s << '\n';

  Foo f1{.a = 1, .c = 3}; // designated initializers
  std::cout << sum(f1.a, f1.c) << '\n';

  return 0;
} */