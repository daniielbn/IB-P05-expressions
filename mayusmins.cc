#include<iostream>

int main() {
  char letra;
  std::cin >> letra;
  if (letra >= 97) {
    char letra_mayuscula = letra - 32;
    std::cout << letra_mayuscula << std::endl;
  }
  else {
    char letra_minuscula = letra + 32;
    std::cout << letra_minuscula << std::endl;
  }
} 
