
#include "Level.h"
using namespace std;

class Level1: public Level{
    public:
        void setHouse(); 
        void setInstructions();
        void setLevel();    

    private:
        string house;
       

};
void Level::setHouse(){
    house = "Ravenclaw";
    cout<<"Bienvenido, te encuentras en el Common Room de la casa "<<house<<endl;
}

void Level::setHouse(){
    house = "Ravenclaw";
    cout<<"Bienvenido, te encuentras en el Common Room de la casa "<<house<<endl;
}