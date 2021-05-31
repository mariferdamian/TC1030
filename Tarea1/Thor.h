#include "Character.h"
#include <iostream>
#include <string>
using namespace std;
class Thor: public Character{
    public:
        Thor(int);
        void setTraje(int);
        void lanzarMartillo();
        void poder();
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
void Thor::poder(){
    cout<<"Se activo el poder de thor"<<endl;
}
int Thor::getTraje(){
    return traje;
}
