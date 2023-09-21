#include <iostream>

// Función para verificar si un número es primo
bool esPrimo(int numero) {
    // Casos especiales: 0 y 1 no son primos, 2 y 3 sí lo son.
    if (numero <= 1) return false;
    if (numero <= 3) return true;
    
    // Optimización: si es divisible por 2 o 3, no es primo.
    if (numero % 2 == 0 || numero % 3 == 0) return false;
    
    // Verificar divisibilidad por números de la forma 6k ± 1.
    for (int i = 5; i * i <= numero; i += 6) {
        if (numero % i == 0 || numero % (i + 2) == 0) return false;
    }
    
    return true;
}

int main() {
    long long suma = 0;
    int limite = 2000000;

    // Itera a través de números desde 2 hasta el límite
    for (int i = 2; i < limite; ++i) {
        if (esPrimo(i)) {
            suma += i; // Si es primo, agrega el número a la suma
        }
    }

    // Imprime la suma de todos los números primos encontrados
    std::cout << "La suma de todos los números primos menores de " << limite << " es: " << suma << std::endl;

    return 0;
}
