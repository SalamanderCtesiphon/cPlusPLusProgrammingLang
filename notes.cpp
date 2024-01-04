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

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
  vector<string> msg{"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

  for (const string &word : msg)
  {
    cout << word << " ";
  }
  cout << endl;
}