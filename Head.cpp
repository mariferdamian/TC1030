#include <iostream>
#include <vector>
using namespace std;

#include "Circle.h"
#include "Rectangle.h"

int main(){
    vector<Shape*> vecForms;
    Shape *objForms;
    Shape *objForms2;

    objForms = new Circle(1,2,3);
    objForms2 = new Rectangle(2,4,6,8);

    vecForms.push_back(objForms);
    vecForms.push_back(objForms2);

    for (int i = 0; i<5; i++){
        vecForms[i] ->draw();
    }
    return 0;
}
