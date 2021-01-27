#include "PointArray.h"

PointArray::PointArray() {
    size = 0;
    data = new Point[0]; // Porque en el destructor se delete
}

PointArray::PointArray(const Point arr[], const int size) {
    this->size = size;
    data = new Point[size];
    for(int i = 0; i < size; i++) {
        data[i] = arr[i];
    }
}

PointArray::PointArray(const PointArray &o) {
    this->size = o.size;
    data = new Point[o.size];
    for(int i = 0; i < size; i++) {
        data[i] = o.data[i];
    }
}

PointArray::~PointArray() {
    delete[] data;
}


int PointArray::getSize() const {
    return size;
}