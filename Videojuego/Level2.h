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
    house = "Hufflepuff";
}

void Level::setLevel(){
    level = 2;
}

void Level::setInstructions(){
    instructions = "Bienvenid@, te encuentras en el Common Room de la casa" + house + 
    "Aquí crearas tus primeros programas mágicos." +
    "Como bienvenida, obtendrás la varita 1, que es la varita creadora." +
    "Con ella podrás hacer conjuros utilizando el mágico lenguaje de C++" +
    "Si logras pasar la prueba final, podrás pasar al siguiente nivel";
}