// Item.h

#ifndef Item_h
#define Item_h

class Item {
    protected:
        int liveUp;

    public:
        Item();
        Item(int);
        virtual void use();
        virtual void showItem();
        virtual string showKeyType();
};

Item::Item() {    // Default Constructor
    int liveUp = 100;
}

Item::Item(int live) {
    liveUp = live;
}

void Item::use() {
    cout << "I am Item but I am not used alone" << endl;
}

void Item::showItem() {
    cout << "Base Item does not have any"<<endl;
}

string Item::showKeyType(){
    cout<<"nada"<<endl;
}
#endif