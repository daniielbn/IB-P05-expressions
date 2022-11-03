/** Universidad de La Laguna
Escuela Superior de Ingeniería y Tecnología
Grado en Ingeniería Informática
Informática Básica 2022-2023

 @file P15613_temperatures
 @author Daniel Brito Negrín alu0101585505@ull.edu.es
 @date Nov 3 2022
 @brief Existe una variable "temperatura", para la cual se le da un valor. Si
        ese valor es menor a 10
 @bug There are no known bugs
 @see https://jutge.org/problems/P41221
 */

#include<iostream>

int main() {
  double temperatura;
  std::cin >> temperatura;
  if (10 < temperatura < 30) {
    std::cout << "it's ok" << std::endl;
  }
  if (temperatura <= 10) {
    std::cout << "it's cold" << std::endl;
  }
  else if (temperatura >= 30) {
    std::cout << "it's hot" << std::endl;
  }
  if (temperatura <= 0) {
    std::cout << "water would freeze" << std::endl;
  }
  else if (temperatura >=100) {
    std::cout << "water would boil" << std::endl;
  }
  return 0;
}
