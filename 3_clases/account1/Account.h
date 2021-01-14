#include <string>

class Account {

    public:
        //CONSTRUCTOR: es una función que se invoca cuando 
        // una instancia es creada.
        Account(std::string accountName) : 
                name(accountName) 
        {  }
        

        void setName(std::string accountName) {
            name = accountName;
        }

        std::string getName() const {
            return name;
        }

    private:
        std::string name;

};
