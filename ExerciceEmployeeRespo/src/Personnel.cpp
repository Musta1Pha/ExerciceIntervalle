#include <iostream>
#include "Personnel.h"
#include "responsable.h"
#include "Employe.h"
#include <vector>
using namespace std;

Personnel::Personnel()
{
   this->Emp1 = vector<Employe*>();
}

void Personnel::Add_Emp(Employe* Emp)
{
    this->Emp1.push_back(Emp);
}

double Personnel::SalaireAVerser()const
{
    double SalTotal;
   for(int i=0;i<this->Emp1.size();i++){
     SalTotal = SalTotal + this->Emp1[i]->CalculSalaire();
   }
   return SalTotal;
}

Personnel::~Personnel()
{
    this->Emp1.clear();
}
