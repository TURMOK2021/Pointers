#include<iostream>
#include<string>


int Add(int& a, int& b);

int main()
{
  int number1{};
  int number2{6};
  int& number1Ref{number1};

  int* pointer = &number1;

  int numbersArr[]{1, 5, 4, 9};
  int* numPointerArr{new int[4]{1, 5, 4, 6}};
  

  std::cout << "Pointers n References: " << std::endl;
  std::cout << std::endl;

  for(int i{}; i < 4; i++)
  {
    std::cout << *(numPointerArr + i) << std::endl;
  }

  std::cout << "pointer inside var memory: " << numPointerArr;
  std::cout << std::endl;
  for(int i{}; i < 4; i++)
  {
    std::cout << numPointerArr + i << std::endl;
  }

  

  

  std::cin.get();
  return 0;
}



int Add(int& a, int& b)
{
  std::cout << "a memory: " << &a << " " << "b memory: " << &b << std::endl;
 
  return a + b;
}