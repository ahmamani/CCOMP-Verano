#ifndef __DYNAMICARRAY_H__
#define __DYNAMICARRAY_H__

template <typename T>
class DynamicArray {

    private:
        T *data;
        int size;
        void resize(int newSize);

    public:
        DynamicArray();
        DynamicArray(const T arr[], const int size);
        DynamicArray(const DynamicArray &o);
        ~DynamicArray();

        /*
        * Función que retorna el tamaño actual del arreglo
        * */
        int getSize() const;

        /*
        * Función para insertar al final del arreglo
        * */
        void push_back(const T &p);

        /*
        * Función para insertar en cualquier posición válida
        * */
        void insert(const int pos, const T &p);

        /*
        * Función para eliminar un elemento del arreglo.
        * */
        void remove(const int pos);

        /*
        * Función para mostrar los datos del arreglo
        * */
        void print() const;

        void clear();

        T *get(const int pos);

        const T *get(const int pos) const;

};

template <typename T>
DynamicArray<T>::DynamicArray() {
    size = 0;
    data = new T[0]; // Porque en el destructor se delete
}

template <typename T>
DynamicArray<T>::DynamicArray(const T arr[], const int size) {
    this->size = size;
    data = new T[size];
    for(int i = 0; i < size; i++) {
        data[i] = arr[i];
    }
}

template <typename T>
DynamicArray<T>::DynamicArray(const DynamicArray &o) {
    this->size = o.size;
    data = new T[o.size];
    for(int i = 0; i < size; i++) {
        data[i] = o.data[i];
    }
}

template <typename T>
DynamicArray<T>::~DynamicArray() {
    delete[] data;
}

template <typename T>
int DynamicArray<T>::getSize() const {
    return size;
}

template <typename T>
void DynamicArray<T>::resize(int newSize) {
    T *tmp = new T[newSize];
    int minSize = (newSize > size) ? size : newSize;
    
    for(int i = 0 ; i < minSize; i++)
        tmp[i] = data[i];
    
    delete[] data;
    size = newSize;
    data = tmp;
}

template <typename T>
void DynamicArray<T>::push_back(const T &p) {
    resize(size+1);
    data[size-1] = p;
}

template <typename T>
void DynamicArray<T>::insert(const int pos, const T &p){
    resize(size+1);
    for(int i = size-1; i > pos; i--){
        data[i] = data[i-1];
    }

    data[pos] = p;
}

template <typename T>
void DynamicArray<T>::remove(const int pos) {
    for(int i = pos; i < size - 1; i++)
        data[i] = data[i+1];
    resize(size - 1);
}

template <typename T>
T *DynamicArray<T>::get(const int pos) {
    return pos >= 0 && pos < size ? data + pos : nullptr;
}

template <typename T>
const T *DynamicArray<T>::get(const int pos) const {
    return pos >= 0 && pos < size ? data + pos : nullptr;
}

template <typename T>
void DynamicArray<T>::clear() {
    resize(0);
}


#endif