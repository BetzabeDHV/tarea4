#include <iostream>

int main() {
    int limite = 1000;
    int suma = 0;

    for (int i = 1; i < limite; ++i) {
        if (i % 3 == 0 || i % 5 == 0) {
            suma += i;
        }
    }

    std::cout << "La suma de los múltiplos de 3 o 5 por debajo de 1000 es: " << suma << std::endl;

    return 0;
}
