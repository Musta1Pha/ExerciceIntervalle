#include <iostream>
#include "TableauBorne.h"

using namespace std;

int main()
{
    Tableau *t1 = new Tableau(3);
    TableauBorne *Tb = new TableauBorne(3,20,30);

    Tb->operator()(1,25);

    delete t1;
    delete Tb;






    return 0;
}
