#ifndef Character_h
#define Character_h
#include <iostream>
#include <string>
using namespace std;

class Character{
    public:
        
        void jump();
        void run();
        void setLevel(int);
        int getLevel();    
    protected:
        int level;
};

int Character::getLevel(){
    return level;
};
void Character::setLevel(int level_){
    level=level_;
};
void Character::jump(){
    cout<<"Jumped"<<endl;
}

void Character::run(){
    cout<<"is running"<<endl;
}
#endif