#ifndef __MYSTACK_H__
#define __MYSTACK_H__

#include <iostream>
#include <vector>

template <typename T>
class MyStack;

template<typename T>
MyStack<T> operator+(const MyStack<T> &s, const MyStack<T> &r) {
    MyStack<T> result = s;
    for(unsigned int i = 0; i < r.items.size(); i++) {
        result.items.push_back(r.items[i]);
    }
    return result;
}

template <typename T>
std::ostream& operator<<(std::ostream &output, MyStack<T> &s) {
    output << "[ ";
    for(unsigned int i = 0; i < s.items.size(); i++) {
        output << s.items[i] << " ";
    }
    output << "]";
    return output;
}

template <typename T>
class MyStack {
        friend MyStack<T> operator+ <>(const MyStack<T> &s, const MyStack<T> &r);
        friend std::ostream& operator<< <>(std::ostream &output, MyStack<T> &s);
        std::vector<T> items;
    public:
        bool empty() const {
            return items.empty();
        }
        void push(const T &item) {
            items.push_back(item);
        }
        T pop() {
            T last = items.back();
            items.pop_back();
            return last;
        }
/*
/// Ejemplo de sobrecarga del op. + como función miembro de la clase.
        MyStack<T> operator+(const MyStack<T> &s) {
            MyStack<T> result = (*this);

            for(unsigned int i = 0; i < s.items.size(); i++) {
                result.items.push_back(s.items[i]);
            }

            return result;
        }
*/
};

#endif