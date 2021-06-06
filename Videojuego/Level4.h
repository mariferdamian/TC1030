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
    "Aquí podrás destruir programas málignos y vencerlos con magia." +
    "Como bienvenida, obtendrás la varita 3, que es la varita destructora." +
    "Con ella podrás buscar el error utilizando el mágico lenguaje de C++" +
    "Si logras pasar la prueba final, habrás terminado tu entrenamiento y serás un mago programador";
}