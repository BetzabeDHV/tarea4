#include <iostream>

int main() {
    int n = 10001; // Número primo que queremos encontrar
    int contador = 0; // Contador de números primos encontrados
    int numeroActual = 2; // Inicia con el primer número primo

    while (true) {
        bool esPrimo = true; // Variable para verificar si numeroActual es primo

        // Verifica si el número actual es menor o igual a 1
        if (numeroActual <= 1) {
            esPrimo = false;
        }
        // Verifica si el número actual es igual a 2 o 3
        else if (numeroActual <= 3) {
            esPrimo = true;
        }
        // Verifica si el número actual es divisible por 2 o 3
        else if (numeroActual % 2 == 0 || numeroActual % 3 == 0) {
            esPrimo = false;
        }
        else {
            int i = 5;
            // Utiliza la verificación de primos con el patrón 6k +/- 1
            while (i * i <= numeroActual) {
                if (numeroActual % i == 0 || numeroActual % (i + 2) == 0) {
                    esPrimo = false;
                    break;
                }
                i += 6;
            }
        }

        if (esPrimo) {
            contador++;
            if (contador == n) {
                break; // Hemos encontrado el número primo 10001
            }
        }
        numeroActual++;
    }

    std::cout << "El número primo " << n << " es: " << numeroActual << std::endl;

    return 0;
}
