#include <iostream>
#include "Entero.h"
using namespace std;

Entero suma(Entero X, Entero Y);

int main(void){

    Entero A, B, C;

    //1. Pide datos
    A.pideleAlUsuarioTusDatos();
    B.pideleAlUsuarioTusDatos();

    //2. Calcula formulas
    C = suma(A, B);

    //3. Muestra resultados
    C.muestraTusDatos();

    return 0;
}

Entero suma(Entero X, Entero Y){
    Entero Resultante;
    Resultante.modificaTuValor(X.dameTuValor() + Y.dameTuValor());
    return Resultante;
}
