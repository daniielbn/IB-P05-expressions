/** Universidad de La Laguna
 Escuela Superior de Ingeniería y Tecnología
 Grado en Ingeniería Informática
 Informática Básica 2022-2023

 @file P1221_sum_of_three_integer_numbers
 @author Daniel Brito Negrín alu0101585505@ull.edu.es
 @date Nov 3 2022
 @brief Programa en el que se declaran 3 variables (primer_numero,
        segundo_numero, tercer_numero) y los suma obteniendo un numero entero.
 @bug There are no known bugs
 @see https://jutge.org/problems/P41221
*/

#include <iostream>

int main() {
  int primer_numero, segundo_numero, tercer_numero, suma;
  std::cin >> primer_numero >> segundo_numero >> tercer_numero;
  suma = primer_numero + segundo_numero + tercer_numero;
  std::cout << suma << std::endl;
  return 0;
}
           
