#ifndef Character_h
#define Character_h
#include <iostream>
#include <string>
using namespace std;

class Character{
    public:
        
        void jump();
        void run();
        virtual void poder();
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
void Character::poder(){
    cout<<"Se ha activado el poder de este personaje"<<endl;
}
#endif