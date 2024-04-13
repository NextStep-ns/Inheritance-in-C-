# include "Meuble.h"
# include "chair.h"
# include "table.h"
# include "rect_table.h"
# include "round_table.h"
# include "desk.h"

main(){

    // TEST chaise CLASS
    chaise v1;
    v1.afficher();

    // TEST rect_table CLASS
    rect_table v2;
    v2.afficher();

    // TEST rectangle CLASS
    round_table v3;
    v3.afficher();

    // TEST desk CLASS
    desk v4;
    v4.afficher();
};

