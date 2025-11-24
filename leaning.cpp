#include <iostream>
#include <string>
int main()
{
  //! without
  std::string marks[] = {
      "43",
      "3443",
      "342"};
  // ! getting the size of an array
  // int myNumbers[5] = {10, 20, 30, 40, 50};

  // std::cout << sizeof(myNumbers) << "\n";

  // int myNumbersLength = sizeof(myNumbers) / sizeof(myNumbers[0]);
  // std::cout << "length of myNumbers: " << myNumbersLength << "\n";
  // for (int i = 0; i < myNumbersLength; ++i)
  // {
  //   std::cout << myNumbers[i] << "\n";
  // }

  // ! Multidimensional Array
  int numMatrix[3][4] = {{3, 4, 2, 1}, {4, 8, 3, 6}, {42, 4, 0, 6}};
  numMatrix[0][0] = 100;
  for (int i = 0; i < 3; ++i)
  {
    for (int j = 0; j < 4; ++j)
    {
      std::cout << numMatrix[i][j] << "\n";
    }
  }

  return 0;
}
