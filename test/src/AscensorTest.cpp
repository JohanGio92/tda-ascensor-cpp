
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

TEST(AscensorTest, estaEnPlantaBajaLuegoDeCrear) {

    Ascensor ascensor(6);

    ASSERT_EQ(0, ascensor.obtenerPisoActual());
}

TEST(AscensorTest, llamarDesdePiso) {

    Ascensor ascensor(10);

    unsigned int pisosMovidos = ascensor.llamarDesdePiso(3);

    ASSERT_EQ(3, pisosMovidos);
    ASSERT_EQ(3, ascensor.obtenerPisoActual());
}

TEST(AscensorTest, llamarDesdePisoEnDosOportunidades) {

    Ascensor ascensor(10);

    ASSERT_EQ(4, ascensor.llamarDesdePiso(4));
    ASSERT_EQ(4, ascensor.obtenerPisoActual());
    ASSERT_EQ(2, ascensor.llamarDesdePiso(6));
    ASSERT_EQ(6, ascensor.obtenerPisoActual());
}


TEST(AscensorTest, llamarDesdePlantaBaja) {

    Ascensor ascensor(8);

    ascensor.llamarDesdePiso(6);

    ASSERT_EQ(6, ascensor.llamarDesdePiso(0));
    ASSERT_EQ(0, ascensor.obtenerPisoActual());
}

TEST(AscensorTest, llamarDesdeUltimoPiso) {

    Ascensor ascensor(12);

    ASSERT_EQ(12, ascensor.llamarDesdePiso(12));
    ASSERT_EQ(12, ascensor.obtenerPisoActual());
}

TEST(AscensorTest, noSeDesplazaSiSeLlamaDelPisoActual) {

    Ascensor ascensor(6);
    ascensor.llamarDesdePiso(4);

    ASSERT_EQ(0, ascensor.llamarDesdePiso(4));
    ASSERT_EQ(4, ascensor.obtenerPisoActual());
}

TEST(AscensorTest, llamarDesdePisoInexistenteLanzaUnaExcepcion) {

    Ascensor ascensor(4);

    ASSERT_ANY_THROW(ascensor.llamarDesdePiso(5));
}


