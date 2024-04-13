#include <stdio.h>
#include <iostream>
#include<math.h>
using namespace std;

class chaise : public meuble{
protected:
    int c_type;
public:
    chaise();
    virtual void afficher();
    virtual int get_type();
    virtual double get_prix();
    virtual ~chaise(){};
};

// CLASS chaise
chaise :: chaise(){
    cout<<"choose the type of the chair pls :"<<endl;
    cout<<"-------------------------"<<endl;
    cout<<"1 - fixed"<<endl;
    cout<<"2 - folding"<<endl;
    cout<<"3 - desk"<<endl;
    cout<<"-------------------------"<<endl;
    cin>>c_type;
}

int chaise :: get_type(){
    return (1);
}

double chaise :: get_prix(){
    double c_prix;

    if(c_type == 1){
       c_prix = 20;
    }
    if(c_type == 2){
       c_prix = 30;
    }
    if(c_type == 3){
       c_prix = 80;
    }
    return c_prix;
}

void chaise ::afficher(){
    string b;

    cout<<"-------------------------"<<endl;
    cout<<"    C'est une chaise "<<endl;
    cout<<"-------------------------"<<endl;
    if(c_type==1){
        b = "fixed chair";
    }
    if(c_type==2){
        b = "folding chair";
    }
    if(c_type==3){
        b = "desk chair";
    }
    cout<<"type :"<<b<<endl;
    cout<<"prix :"<<get_prix()<<" euros"<<endl;
    cout<<"-------------------------"<<endl;

}



