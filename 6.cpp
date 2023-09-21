#include <iostream>

int main() {
    int n = 100; // Número de los primeros cien números naturales

    // Calcula la suma de los cuadrados de los primeros cien números naturales
    int sumaDeCuadrados = 0;
    for (int i = 1; i <= n; ++i) {
        sumaDeCuadrados += i * i;
    }

    // Calcula la suma de los primeros cien números naturales y luego eleva al cuadrado
    int suma = n * (n + 1) / 2; // Suma de los primeros cien números naturales
    int cuadradoDeSuma = suma * suma;

    // Calcula la diferencia
    int diferencia = cuadradoDeSuma - sumaDeCuadrados;

    std::cout << "La diferencia entre la suma de los cuadrados y el cuadrado de la suma de los primeros " << n << " números naturales es: " << diferencia << std::endl;

    return 0;
}
