#include <stdio.h>
#include <iostream>
#include<math.h>
using namespace std;

class desk : public rect_table{
protected:
    double tir_prix;
    int tir_nb;

public:
    desk();
    virtual void afficher();
    virtual int get_type();
    virtual double get_prix();
    virtual int ajouter();
    virtual int supprimer();
    virtual ~desk(){};
};

// CLASS chaise
desk :: desk(): rect_table(0){
    if(t_type == 1){
       c_prix = 140;
    }
    if(t_type == 2){
       c_prix = 160;
    }
    if(t_type == 3){
       c_prix = 120;
    }
}

int desk :: get_type(){
    return (5);
}

double desk :: get_prix(){
    return c_prix;

}

int desk :: ajouter(){
    int a;
    cout<<"choose the number of drawers to add :"<<endl;
    cout<<"-------------------------"<<endl;
    cin>>a;
    tir_nb += a;
    system("pause");
    system("cls");
    return (tir_nb);
}
int desk :: supprimer(){
    int a;
    cout<<"choose the number of drawers to add :"<<endl;
    cout<<"-------------------------"<<endl;
    cin>>a;
    tir_nb -= a;
    system("pause");
    system("cls");
    return (tir_nb);
}

void desk ::afficher(){
    string b;
    int cho, cho2;
    cout<<"choose the number of drawers between 1 and 6 pls :"<<endl;
    cout<<"-------------------------"<<endl;
    cin>>tir_nb;
    if(tir_nb > 6){
        tir_nb = 6;
        cout<<"too many drawers - set to 6"<<endl;
    }
    if(tir_nb <1){
        tir_nb = 1;
        cout<<"not enough drawers - set to 1"<<endl;
    }
    do{
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
    cout<<"model : rectangulaire special bureau"<<endl;
    cout<<"drawers  :"<<tir_nb<<" drawers"<<endl;
    cout<<"prix  :"<<c_prix<<" euros"<<endl;
    cout<<"price drawers  :"<<tir_nb*15<<" euros"<<endl;
    cout<<"price desk  :"<<tir_nb*15 + c_prix<<" euros"<<endl;
    cout<<"-------------------------"<<endl;
    system("pause");
    system("cls");
    cout<<"-------------------------"<<endl;
    cout<<"    modifier ? "<<endl;
    cout<<"    1 - oui "<<endl;
    cout<<"    2 - non "<<endl;
    cout<<"-------------------------"<<endl;
    cin>>cho;
    if(cho==1){
        cout<<"-------------------------"<<endl;
        cout<<"    1 - ajouter  "<<endl;
        cout<<"    2 - supprimer "<<endl;
        cout<<"-------------------------"<<endl;
        cin>>cho2;
    }
    if(cho2==1){
        ajouter();
    }
    if(cho2==2){
        supprimer();
    }
    }while(cho!=2);
}



