#include <stdio.h>
#include <iostream>
#include<math.h>
using namespace std;

class rect_table : public table{
protected:
    double c_prix;
public:
    rect_table();
    rect_table(int);
    virtual void afficher();
    virtual int get_type();
    virtual double get_prix();
    virtual ~rect_table(){};
};

// CLASS chaise
rect_table :: rect_table(): table(){
}

rect_table :: rect_table(int a): table(a){
}


int rect_table :: get_type(){
    return (3);
}

double rect_table :: get_prix(){

    if(t_type == 1){
       c_prix = 140;
    }
    if(t_type == 2){
       c_prix = 160;
    }
    if(t_type == 3){
       c_prix = 120;
    }
    return c_prix;
}

void rect_table ::afficher(){
    string b;

    cout<<"-------------------------"<<endl;
    cout<<"    C'est une table "<<endl;
    cout<<"-------------------------"<<endl;
    if(t_type==1){
        b = "medium table";
    }
    if(t_type==2){
        b = "high table";
    }
    if(t_type==3){
        b = "low table";
    }
    cout<<"type  :"<<b<<endl;
    cout<<"model : Rectangulaire"<<endl;
    cout<<"prix  :"<<get_prix()<<" euros"<<endl;
    cout<<"-------------------------"<<endl;

}



