#include <iostream>
using namespace std;
int main(){
    int myNum = 7;
    int *p = &myNum;
    cout << "myNum content : "<<myNum<<endl;
    cout << "*p    content : "<<*p<<endl<<endl;
    cout << "myNum address : "<<&myNum<<endl;
    cout << "p     address : "<<p<<endl;
    return 0;
}