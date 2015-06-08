Algoritmos y Programación 2 - FI UBA

# TDA: Ascensor

## Enunciado

Diseñar la especificación e implementar el TDA `Ascensor`. 

![Ascensor][ascensor]

El `Ascensor` debe proveer operaciones para:

1. Inicializarlo recibiendo como parámetro la cantidad de pisos por los que se 
mueve (sin considerar la planta baja).

2. Devolver el número de piso en el que se encuentra, considerando 0 como la planta baja.

3. Llamar desde un piso: debe moverlo y devolver la cantidad de pisos que el ascensor se movió 
para llegar al piso indicado. 

4. Devolver la cantidad total de pisos que el ascensor subió y bajó.

5. Devolver la cantidad de veces que fue a un piso.

## Solución

### Implementaciones incrementales

1. Constructor de `Ascensor` y primeros atributos identificados:
    * declaración: [`Ascensor.h`](../punto-01/src/Ascensor.h)
    * implementación: [`Ascensor.cpp`](../punto-01/src/Ascensor.cpp)
    * uso: [`main.cpp`](../punto-01/src/main.cpp)

2. Método `unsigned int obtenerPisoActual()`:
    * declaración: [`Ascensor.h`](../punto-02/src/Ascensor.h)
    * implementación: [`Ascensor.cpp`](../punto-02/src/Ascensor.cpp)
    * uso: [`main.cpp`](../punto-02/src/main.cpp)

3. Método `unsigned int llamarDesdePiso(unsigned int piso)`:
    * declaración: [`Ascensor.h`](../punto-03/src/Ascensor.h)
    * implementación: [`Ascensor.cpp`](../punto-03/src/Ascensor.cpp)
    * uso: [`main.cpp`](../punto-03/src/main.cpp)




[ascensor]: https://upload.wikimedia.org/wikipedia/commons/thumb/6/6d/Feature_elevators.svg/200px-Feature_elevators.svg.png "Ascensor"
