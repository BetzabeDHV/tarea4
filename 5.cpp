#include <iostream>

int main() {
    long long resultado = 1; // Inicializamos el resultado en 1

    // Bucle para encontrar el mínimo común múltiplo de los números del 1 al 20
    for (int i = 2; i <= 20; ++i) {
        int gcd = 1; // Inicializamos el máximo común divisor en 1
        int temp = resultado; // Copiamos el resultado actual a una variable temporal

        // Calcula el máximo común divisor (GCD) entre resultado y i
        while (temp % i != 0) {
            temp += resultado; // Incrementa temp por el valor de resultado
            gcd = i; // Actualiza el GCD a i
        }

        resultado = temp; // Actualiza el resultado con el LCM encontrado
    }

    // Imprime el número más pequeño divisible por todos los números del 1 al 20
    std::cout << "El número más pequeño divisible por todos los números del 1 al 20 es: " << resultado << std::endl;

    return 0;
}
