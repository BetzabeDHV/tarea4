#include <iostream>

int main() {
    long long numero = 600851475143;
    long long factor = 2;  // Comenzamos con el primer número primo, que es 2.
    long long mayor_primo = 2;  // Inicializamos la variable para almacenar el mayor factor primo conocido.

    // Mientras el cuadrado del factor sea menor o igual al número, continuamos buscando factores primos.
    while (factor * factor <= numero) {
        if (numero % factor == 0) {
            numero /= factor;  // Dividimos el número repetidamente si es divisible por el factor.
            mayor_primo = factor;  // Actualizamos el mayor factor primo si encontramos uno más grande.
        } else {
            factor++;  // Pasamos al siguiente número para verificar si es un factor primo.
        }
    }

    // Si el número restante es mayor que el mayor factor primo conocido, lo consideramos como el mayor factor primo.
    if (numero > mayor_primo) {
        mayor_primo = numero;
    }

    // Imprimimos el resultado
    std::cout << "El mayor factor primo de 600851475143 es: " << mayor_primo << std::endl;

    return 0;
}
