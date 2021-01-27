#ifndef __POINTARRAY_H__
#define __POINTARRAY_H__

#include "Point.h"

/*
* Esta es una clase que representa un ARREGLO DINÁMICO de Points
*/
class PointArray {

    private:
        Point *data;
        int size;
    
    public:
        PointArray();
        PointArray(const Point arr[], const int size);
        PointArray(const PointArray &o);
        ~PointArray();

        /*
        * Función que retorna el tamaño actual del arreglo
        * */
        int getSize() const;

        /*
        * Función para insertar al final del arreglo
        * */
        void push_back(const Point &p);

        /*
        * Función para insertar en cualquier posición válida
        * */
        void insert(const int pos, const Point &p);

        /*
        * Función para eliminar un elemento del arreglo.
        * */
        void remove(const int pos);

        /*
        * Función para mostrar los datos del arreglo
        * */
        void print() const;

};

#endif