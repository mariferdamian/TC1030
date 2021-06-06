#include "Item.h"
using namespace std;

class Varita: public Item{
    public:
        Varita();
        Varita(int);
        void display();

    protected:
        int tipo; // Varita de enseñanza, creadora, destructora, arregladora
        int level;
};

Varita::Varita(){
    // if (level == 1)
    tipo = 1;

}
Varita::Varita( int t){
    tipo = t;
}

void Varita::display(){
    cout<<"varita "<<tipo<<endl;
}