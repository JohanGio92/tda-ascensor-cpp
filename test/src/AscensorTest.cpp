
#include "gtest/gtest.h"
#include "Ascensor.h"

/* hack/truco para poder correr las pruebas sin copiar los fuentes */
#include "Ascensor.cpp"

TEST(AscensorTest, crearDeterminaLaCantidadDePisos) {

    Ascensor ascensor(5);

    ASSERT_EQ(5, ascensor.obtenerUltimoPiso());
}

TEST(AscensorTest, crearConPisosInvalidosLanzaExcepcion) {

    ASSERT_ANY_THROW(Ascensor ascensor(0));
}
