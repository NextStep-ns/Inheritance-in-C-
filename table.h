#include <stdio.h>
#include <iostream>
#include<math.h>
using namespace std;

class table : public meuble{
protected:
    int t_type;
public:
    table();
    table(int);
    virtual void afficher() =0;
    virtual int get_type()=0;
    virtual ~table(){};
};

// CLASS chaise
table :: table(){
    cout<<"choose the size of the table pls :"<<endl;
    cout<<"-------------------------"<<endl;
    cout<<"1 - medium"<<endl;
    cout<<"2 - high"<<endl;
    cout<<"3 - low"<<endl;
    cout<<"-------------------------"<<endl;
    cin>>t_type;
}

table :: table(int a){
    if(a ==0){
    cout<<"choose the size of the table pls :"<<endl;
    cout<<"-------------------------"<<endl;
    cout<<"1 - medium"<<endl;
    cout<<"2 - high"<<endl;
    cout<<"-------------------------"<<endl;
    }

    cin>>t_type;
}

int table :: get_type(){
    return (2);
}

void table ::afficher(){
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
        b = "low table ";
    }
    cout<<"type :"<<b<<endl;
    cout<<"-------------------------"<<endl;

}




