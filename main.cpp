#include <iostream>
#include "example_lib.h"
#include "example_so.h"


int main (int argc, char *argv[]) {
  
  std::cout << "Hello World" << std::endl;

  print_hello_lib();

  print_hello_so();
  return 0;
}
