
#ifndef __ASCENSOR_H__
#define __ASCENSOR_H__


class Ascensor {

    private:

        unsigned int cantidadDePisos;

        unsigned int piso;

    public:

        /* pre : 'pisos' indica la cantidad de pisos por los que se mover�
         *       (sin considerar la planta baja), debe ser mayor a 0.
         * post: el ascensor est� en la planta baja, con la posibilidad
         *       de moverse entre [1..'pisos'].
         */
        Ascensor(unsigned int pisos);

        /* post: devuelve el m�ximo piso al que puede moverse el Ascensor.
         */
        unsigned int obtenerUltimoPiso();

        /* post: devuelve el piso en el que se encuentra el Ascensor. Si est�
         *       en planta baja devuelve 0 (cero).
         */
        unsigned int obtenerPisoActual();
};

#endif
