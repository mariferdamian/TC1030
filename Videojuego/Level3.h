#include "Level.h"
using namespace std;

class Level1: public Level{
    public:
        string house; 
        string instructions; 
        int level;
          

    private:
        void setHouse(); 
        void setInstructions();
        void setLevel();

};
void Level::setHouse(){
    house = "Griffindor";
}

void Level::setLevel(){
    level = 3;
}

void Level::setInstructions(){
    instructions = "Bienvenid@, te encuentras en el Common Room de la casa" + house + 
    "Aquí podrás encontrar problemas en programas mágicos y arreglarlos, también conocido entre los magos como 'Debugging'." +
    "Como bienvenida, obtendrás la varita 2, que es la varita arregladora." +
    "Con ella podrás buscar y resolver el error utilizando el mágico lenguaje de C++" +
    "Si logras pasar la prueba final, podrás pasar al siguiente nivel";
}