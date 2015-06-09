
#include <string>
#include "Ascensor.h"

using namespace std;

Ascensor::Ascensor(unsigned int pisos) {

    if (pisos < 1) {

        throw string("No se puede inicializar el Ascensor con menos de un piso");
    }

    this->cantidadDePisos = pisos;
    this->piso = 0;
    this->pisosDesplazados = 0;

    /* inicializa los contadores de llamadas a un piso */
    this->llamadasDesdePiso = new unsigned int[this->cantidadDePisos + 1];
    for (unsigned int i = 0; i <= this->cantidadDePisos; i++) {
        this->llamadasDesdePiso[i] = 0;
    }
}

unsigned int Ascensor::obtenerUltimoPiso() {

    return this->cantidadDePisos;
}

unsigned int Ascensor::obtenerPisoActual() {

    return this->piso;
}

unsigned int Ascensor::llamarDesdePiso(unsigned int piso) {

    unsigned int desplazamiento;

    this->validarPiso(piso);

    if (piso > this->obtenerPisoActual()) {

        desplazamiento = piso - this->obtenerPisoActual();

    } else {

        desplazamiento = this->obtenerPisoActual() - piso;
    }

    this->piso = piso;
    this->pisosDesplazados += desplazamiento;
    this->llamadasDesdePiso[this->piso]++;

    return desplazamiento;
}

unsigned int Ascensor::totalizarPisosDesplazados() {

    return this->pisosDesplazados;
}

unsigned int Ascensor::totalizarLlamadasDesdePiso(unsigned int piso) {

    this->validarPiso(piso);

    return this->llamadasDesdePiso[piso];
}

void Ascensor::validarPiso(unsigned int piso) {

    if (piso > this->obtenerUltimoPiso()) {

        throw string("Piso inexistente");
    }
}

Ascensor::~Ascensor() {

    delete[] this->llamadasDesdePiso;
}
