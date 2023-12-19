#include <iostream>
#include <iomanip>

int main()
{
  int size = 20;
  char * firstInput = new char[size]{};
  char c = 0;
  size_t read = 0;
  std::cin >> std::noskipws;
  while ((std::cin >> c) && (read < size-1))
  {
    firstInput[read++] = c;
    if (c == '\n')
    {
      firstInput[read - 1] = 0;
      break;
    }
  }
  std::cin >> std::skipws;
  std::cout << firstInput << "\n";
  delete [] firstInput;
}
