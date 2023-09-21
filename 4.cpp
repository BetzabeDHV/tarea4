#include <iostream>

// Función para verificar si un número es un palíndromo
bool esPalindromo(int numero) {
    int original = numero;
    int inverso = 0;

    while (numero > 0) {
        inverso = inverso * 10 + numero % 10; // Construye el número inverso
        numero /= 10; // Elimina el último dígito del número original
    }

    return original == inverso; // Compara el número original con su versión inversa
}

int main() {
    int max_palindromo = 0; // Variable para almacenar el palíndromo más grande encontrado

    for (int i = 999; i >= 100; --i) { // Itera a través de los números de 3 dígitos desde 999 hasta 100
        for (int j = 999; j >= 100; --j) { // Itera nuevamente a través de los números de 3 dígitos desde 999 hasta 100
            int producto = i * j; // Calcula el producto de los dos números

            // Si el producto es menor o igual al máximo palíndromo encontrado hasta ahora, sal del bucle interno
            if (producto <= max_palindromo) {
                break;
            }

            // Si el producto es un palíndromo y es mayor que el máximo palíndromo encontrado hasta ahora, actualiza max_palindromo
            if (esPalindromo(producto)) {
                max_palindromo = producto;
            }
        }
    }

    // Imprime el palíndromo más grande encontrado
    std::cout << "El palíndromo más grande formado por el producto de dos números de 3 dígitos es: " << max_palindromo << std::endl;

    return 0;
}
