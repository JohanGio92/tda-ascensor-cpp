
class Ascensor {

    private:

        unsigned int cantidadDePisos;


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
};
