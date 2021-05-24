#include <iostream>
#include <string>
#include <vector>
#include <variant>
#include "Cap.h"
#include "Thor.h"
#include "Ironman.h"

using namespace std;

int main(){
    
    vector<Cap> capitanes;
    vector<Thor> thors;
    vector<Ironman> ironmans;
    bool finish=1;
    cout<<"Agregar capitanes"<<endl;
    while (finish){
        capitanes.push_back(Cap(1));
        cout<<"Do you want to continue"<<endl;
        cin>>finish;

    }
    finish=1;
    cout<<"Agregar thores"<<endl;
    while (finish){
        thors.push_back(Thor(1));
        cout<<"Do you want to continue"<<endl;
        cin>>finish;
    }
    finish=1;
    cout<<"Agregar ironmans"<<endl;
    while(finish){
        
        ironmans.push_back(Ironman(1));
        cout<<"Do you want to continue"<<endl;
        cin>>finish;
    }
    for (int i =0; i< capitanes.size(); i++){
        cout<<"Cap "<<i<<endl;
        cout<<"Level"<<capitanes[i].getLevel()<<endl;
        capitanes[i].jump();
        capitanes[i].run();
        cout<<"Suit"<<capitanes[i].getTraje()<<endl;
        capitanes[i].lanzarEscudo();
    }
    
    for (int i =0; i< thors.size(); i++){
        cout<<"Thor "<<i<<endl;
        cout<<"Level"<<thors[i].getLevel()<<endl;
        thors[i].jump();
        thors[i].run();
        cout<<"Suit"<<thors[i].getTraje()<<endl;
        thors[i].lanzarMartillo();
    }
       for (int i =0; i< ironmans.size(); i++){
        cout<<"Ironman "<<i<<endl;
        cout<<"Level"<<ironmans[i].getLevel()<<endl;
        ironmans[i].jump();
        ironmans[i].run();
        cout<<"Suit"<<ironmans[i].getTraje()<<endl;
        ironmans[i].volar();
    }
    return 0;
}