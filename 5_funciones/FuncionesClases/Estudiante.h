#include <iostream>
#include <string>

class Estudiante {
    public:
        Estudiante(std::string n, std::string a, int c) : 
                nombre(n), apellido(a), codigo(c) {
        }
        void print() {
            std::cout << "El nombre es " << nombre << std::endl;
            std::cout << "El apellido es es " << apellido << std::endl;
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
