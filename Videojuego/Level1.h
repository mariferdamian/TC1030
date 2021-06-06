
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
    house = "Ravenclaw";
}

void Level::setLevel(){
    level = 1;
}

void Level::setInstructions(){
    instructions = "Bienvenid@, te encuentras en el Common Room de la casa \n" + house + 
    "Aquí aprenderas todo lo que necesitas saber sobre la magia. \n" +
    "Como bienvenida, obtendrás la varita 0, que es la varita de enseñanza. \n" +
    "Con ella podrás aprender de conjuros utilizando el mágico lenguaje de C++ \n" +
    "Si logras pasar la prueba final, podrás pasar al siguiente nivel";
}
