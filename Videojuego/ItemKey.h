#include "Item.h"
using namespace std;
class Key: public Item{
    public:
        Key();
        Key(int);
        void display();

    protected:
        int tipo; // poison y potion 

};

Key::Key(){
    tipo = 0;

}
Key::Key( int t){
    tipo = t;
}

void Key::display(){
    cout<<"key "<<tipo<<endl;
}