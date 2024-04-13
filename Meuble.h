
#include <stdio.h>
#include <iostream>
using namespace std;

class meuble{ // Abstract class

public:
    meuble();
    virtual void afficher()=0;
    virtual ~meuble(){};
};

//    CLASS forme
meuble :: meuble(){}

void meuble ::afficher(){}


