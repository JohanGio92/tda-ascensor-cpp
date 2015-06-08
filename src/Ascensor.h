
class Ascensor {

    private:

        unsigned int cantidadDePisos;


    public:

        /* pre : 'pisos' indica la cantidad de pisos por los que se moverá
         *       (sin considerar la planta baja), debe ser mayor a 0.
         * post: el ascensor está en la planta baja, con la posibilidad
         *       de moverse entre [1..'pisos'].
         */
        Ascensor(unsigned int pisos);

        /* post: devuelve el máximo piso al que puede moverse el Ascensor.
         */
        unsigned int obtenerUltimoPiso();
};
