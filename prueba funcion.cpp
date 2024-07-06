#include <iostream>
#include "funcion.hpp"  // Incluye el archivo de encabezado donde está la definición de la función

using namespace std;

int main() {
    int a;
    int b;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    sum(a, b);  // Llama a la función sum
}