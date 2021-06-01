#include <iostream>
using namespace std;


class Test {
    private:
        int count;
    public:
        Test(){count = 5;}
        void operator++();
        void operator--();
        void display(){
            cout<< "El contador es: "<<count<<endl;
        }
};

void Test::operator ++(){
    count = count + 5;
}

void Test::operator --(){
    count = count - 1;
}


int main(){
    Test t;
    ++t;
    --t;
    t.display();
    
    return 0;
}

