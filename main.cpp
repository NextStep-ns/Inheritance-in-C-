# include "Meuble.h"
# include "chair.h"
# include "table.h"
# include "rect_table.h"
# include "round_table.h"
# include "desk.h"

main(){
    int choice;

    // TEST desk CLASS
    meuble* t1 = new chaise;
    meuble* t2 = new rect_table;
    meuble* t3 = new round_table;
    meuble* t4 = new desk;
    t1->afficher();
    //t2->afficher();
    //t3->afficher();
    //t4->afficher();

    delete(t1);
    delete(t2);
    delete(t3);
    delete(t4);
};
