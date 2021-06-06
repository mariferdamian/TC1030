#ifndef Item_h
#define Item_h
#include <string>
using namespace std;

class Level{
    public:
        virtual void setHouse(); 
        virtual void setInstructions(); 
        virtual void setLevel(); 

    private:
        string house;
        string instructions;
        int level;

         

};
void Level::setHouse(){
     house = """";
};
void Level::setInstructions(){
     instructions = """";
};

void Level::setLevel(){
     level = 0;
};



#endif