// hello.cpp: Maggie Johnson
// Description: a program that prints the immortal saying "hello world"

#include <iostream>
using namespace std;

int main() {
  for (int i = 0; i < 6; i++) {
    for (int j = 0; j < 4; j++) {
      std::cout << "Hello World! "; 
    }
    std::cout <<  endl;
  }
  return 0;
}
