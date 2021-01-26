#include "IntegerArray.h"

IntegerArray::IntegerArray(int size) {
    this->data = new int[size];
    this->size = size;
} 

IntegerArray::IntegerArray(IntegerArray &o) {
    this->data = new int[o.size];
    size = o.size;
    for( int i = 0; i < size; i++)
        data[i] = o.data[i];
}

IntegerArray::~IntegerArray() {
    delete[] data;
}

