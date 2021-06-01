#include "Item.h"
using namespace std;
class Pocion: public Item{
    public:
        Pocion();
        Pocion(int);
        void display();

    protected:
        int tipo; // poison y potion 

};

Pocion::Pocion(){
    tipo = 0;

}
Pocion::Pocion( int t){
    tipo = t;
}

void Pocion::display(){
    cout<<tipo<<endl;
}