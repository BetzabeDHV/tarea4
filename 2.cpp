#include <iostream>

int main() {
    int limite = 4000000; // Límite hasta el cual buscaremos términos de la secuencia
    int suma = 0;         // Inicializamos la variable para almacenar la suma de los términos pares
    int a = 1;            // Primer término de la secuencia de Fibonacci
    int b = 2;            // Segundo término de la secuencia de Fibonacci

    while (b <= limite) { // Iniciamos un bucle while para generar la secuencia de Fibonacci
        if (b % 2 == 0) { // Verificamos si el término actual es par
            suma += b;    // Si es par, lo sumamos a la variable suma
        }
        int temp = a;     // Guardamos el valor de 'a' en una variable temporal
        a = b;            // Actualizamos 'a' con el valor de 'b'
        b = temp + b;     // Actualizamos 'b' sumando el valor anterior de 'a' a 'b' para generar el siguiente término
    }

    std::cout << "La suma de los términos pares de la secuencia de Fibonacci que no superan los cuatro millones es: " << suma << std::endl;

    return 0; // Terminamos el programa con un valor de retorno 0
}
