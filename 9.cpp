#include <iostream>

int main() {
    int suma_objetivo = 1000;
    int producto_abc = 0;

    for (int a = 1; a < suma_objetivo; ++a) {
        for (int b = a + 1; b < suma_objetivo; ++b) {
            int c = suma_objetivo - a - b;
            if (a * a + b * b == c * c) {
                producto_abc = a * b * c;
                break;
            }
        }
        if (producto_abc > 0) {
            break;
        }
    }

    std::cout << "El producto abc para el triplete pitagórico donde a + b + c = 1000 es: " << producto_abc << std::endl;

    return 0;
}
