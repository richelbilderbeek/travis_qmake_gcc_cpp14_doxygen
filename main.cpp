#include <cassert>
#include <iostream>

/// Get the 'Hello world' text
std::string get_hello_world() noexcept
{
  return "Hello world";
}

/// Show 'Hello world', followed by a newline
int main() 
{
  std::cout << get_hello_world() << '\n';
}
