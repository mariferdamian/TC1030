#ifndef Item_h
#define Item_h

using namespace std;

class Item{
    public:
        Item();
        Item(string);
        virtual void display();
    protected:
        string nombre;
        
};
Item::Item(){
    nombre = "?";

}
Item::Item(string n){
    nombre = n;
}
void Item::display(){
    cout<<nombre<<endl;
}
#endif