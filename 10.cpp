#include <iostream>

bool esPrimo(int numero) {
    if (numero <= 1) return false;
    if (numero <= 3) return true;
    if (numero % 2 == 0 || numero % 3 == 0) return false;
    for (int i = 5; i * i <= numero; i += 6) {
        if (numero % i == 0 || numero % (i + 2) == 0) return false;
    }
    return true;
}

int main() {
    long long suma = 0;
    int limite = 2000000;

    for (int i = 2; i < limite; ++i) {
        if (esPrimo(i)) {
            suma += i;
        }
    }

    std::cout << "La suma de todos los números primos menores de " << limite << " es: " << suma << std::endl;

    return 0;
}
