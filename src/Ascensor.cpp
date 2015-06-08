
#include "Ascensor.h"
#include <string>

using namespace std;

Ascensor::Ascensor(unsigned int pisos) {

    if (pisos < 1) {

        throw string("No se puede inicializar el Ascensor con menos de un piso");
    }

    this->cantidadDePisos = pisos;
}

unsigned int Ascensor::obtenerUltimoPiso() {

    return this->cantidadDePisos;
}
