#include <iostream>

int main () {
 double k; //k (Conductividad térmica) puede incluir valores decimales
 std::cout << "Por favor ingresa el valor de k en números" << std::endl; 
 std::cin >> k; 
 if (k <= 0.1) {
  std::cout << "El material es Aislante termico" << std::endl; 
 } else if (k >= 0.1 && k <=1 ) {
  std::cout << "El material tiene baja conductividad" << std::endl;
 } else if (k >= 1 && k < 100) {
  std::cout << "El material es un buen conductor" << std::endl;
 } else if (k >= 100) {
  std::cout << "El material es un excelente conductor" << std::endl;
 }
}