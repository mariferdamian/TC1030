#include "Item.h"
using namespace std;

class Varita: public Item{
    public:
        Varita();
        Varita(int);
        void display();

    protected:
        int tipo; // Varita destructora, arregladora y creadora 

};

Varita::Varita(){
    tipo = 1;

}
Varita::Varita( int t){
    tipo = t;
}

void Varita::display(){
    cout<<tipo<<endl;
}