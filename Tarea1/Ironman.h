#include "Character.h"
#include <iostream>
#include <string>
using namespace std;
class Ironman: public Character{
    public:
        Ironman(int);
        void setTraje(int);
        void volar();
        int getTraje();

    protected:
        int traje;  

};
Ironman::Ironman(int traje_):Character(){
    traje=traje_;
};
void Ironman::setTraje(int traje_){
    traje=traje_;

}
void Ironman::volar(){
    cout<<"volar"<<endl;
}
int Ironman::getTraje(){
    return traje;
}