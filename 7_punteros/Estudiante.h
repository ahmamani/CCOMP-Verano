#include <iostream>
#include <string>

class Estudiante {
    public:
        Estudiante(std::string n, std::string a, int c) : 
                nombre(n), apellido(a), codigo(c) {
        }
        void print() const {
            std::cout << "El nombre es " << nombre << ". ";
            std::cout << "El apellido es es " << apellido << ". ";
            std::cout << "El codigo es " << codigo << std::endl;
        }
        void setNombre(std::string n) {
            nombre = n;
        }
    private:
        std::string nombre;
        std::string apellido;
        int codigo;

};
