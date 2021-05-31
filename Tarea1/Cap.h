#include "Character.h"
#include <iostream>
#include <string>
using namespace std;
class Cap: public Character{
    public:
        Cap(int);
        void setTraje(int);
        void lanzarEscudo();
        void poder();
        int getTraje();

    protected:
        int traje;  

};
Cap::Cap(int traje_):Character(){
    traje=traje_;
};
void Cap::setTraje(int traje_){
    traje=traje_;

}
void Cap::poder(){
    cout<<"Se ha activado el poder del capitan america"<<endl;
}
void Cap::lanzarEscudo(){
    cout<<"Lanzar escudo"<<endl;
}
int Cap::getTraje(){
    return traje;
}
