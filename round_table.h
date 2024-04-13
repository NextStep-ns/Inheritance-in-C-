#include <stdio.h>
#include <iostream>
#include<math.h>
using namespace std;

class round_table : public table{

public:
    round_table();
    virtual void afficher();
    virtual int get_type();
    virtual double get_prix();
    virtual ~round_table(){};
};

// CLASS chaise
round_table :: round_table(): table(){
}

int round_table :: get_type(){
    return (4);
}

double round_table :: get_prix(){
    double c_prix;

    if(t_type == 1){
       c_prix = 140 +70;
    }
    if(t_type == 2){
       c_prix = 160+80;
    }
    if(t_type == 3){
       c_prix = 120+60;
    }
    return c_prix;
}

void round_table ::afficher(){
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
    cout<<"model :round"<<endl;
    cout<<"prix  :"<<get_prix()<<" euros"<<endl;
    cout<<"-------------------------"<<endl;

}


