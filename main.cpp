#include <iostream>

class test
{
  test() {};
  std::string get_hello_world() const noexcept
  {
    return "Hello world too";
  }
};

std::string get_hello_world() noexcept
{
  return "Hello world";
}

int main() 
{
  std::cout << get_hello_world() << '\n';
}
