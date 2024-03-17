#include "matematica.h"
#include <iostream>

using std::cout;
using std::cin;

int main() {
    float angulo;

    cout << "Digite o ângulo em radianos: ";
    cin >> angulo;

    cout << "Seno(" << angulo << ") = " << calcular_seno(angulo) << std::endl;
    cout << "Cosseno(" << angulo << ") = " << calcular_cosseno(angulo) << std::endl;
    cout << "Tangente(" << angulo << ") = " << calcular_tangente(angulo) << std::endl;

    return 0;
}
