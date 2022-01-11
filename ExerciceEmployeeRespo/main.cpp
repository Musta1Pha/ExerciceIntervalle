#include <iostream>
#include "responsable.h"
#include "Employe.h"
#include "Personnel.h"
#include "Commercial.h"

using namespace std;

int main()
{
   Employe * E1 = new Employe("E1",2000);
   //Employe * E2 = new Responsable("E2",2000,"E2");

   Responsable * R1 = new Responsable("R1",1000,"R1");
   Responsable * R2 = new Responsable("R2",1300,"R2");
   Commercial * C1 = new Commercial("C1",1000,10);

   R1->Add_Subord(R2);
   R2->Add_Subord(E1);

  Personnel *p = new Personnel;
  p->Add_Emp(E1);
  p->Add_Emp(C1);
  p->Add_Emp(R1);

  cout<<p->SalaireAVerser();


    return 0;
}
