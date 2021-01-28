#include <iostream>
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

void PointArray::resize(int newSize) {
    Point *tmp = new Point(newSize);
    int minSize = (newSize > size) ? size : newSize;
    
    for(int i = 0 ; i < minSize; i++)
        tmp[i] = data[i];
    
    delete[] data;
    size = newSize;
    data = tmp;
}

void PointArray::push_back(const Point &p) {
    resize(size+1);
    data[size-1] = p;
}

void PointArray::insert(const int pos, const Point &p){
    resize(size+1);
    for(int i = size-1; i > pos; i--)
        data[i] = data[i-1];

    data[pos] = p;
}

void PointArray::remove(const int pos) {
    for(int i = pos; i < size - 2; i++)
        data[i] = data[i+1];
    resize(size - 1);
}

void PointArray::print() const {
    std::cout << "[ ";
    for(int i = 0; i < size; i++) {
        data[i].print();
        std::cout << " ";
    }
    std::cout << "]" << std::endl;
}
