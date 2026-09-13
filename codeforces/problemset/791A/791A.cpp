#include <iostream>

int main()
{
  int bob{}, limak{}, i{0};

  std::cin >> limak >> bob;

  while (bob >= limak)
  {
    limak *= 3;
    bob *= 2;
    i++; 
  }

  std::cout << i << '\n'; 

  return 0; 
}
