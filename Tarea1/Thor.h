#include "Character.h"
#include <iostream>
#include <string>
using namespace std;
class Thor: public Character{
    public:
        Thor(int);
        void setTraje(int);
        void lanzarMartillo();
        int getTraje();

    protected:
        int traje;  

};
Thor::Thor(int traje_):Character(){
    traje=traje_;
};
void Thor::setTraje(int traje_){
    traje=traje_;

}
void Thor::lanzarMartillo(){
    cout<<"Lanzar Martillo"<<endl;
}
int Thor::getTraje(){
    return traje;
}