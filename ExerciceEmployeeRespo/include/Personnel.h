#ifndef PERSONNEL_H
#define PERSONNEL_H
#include <iostream>
#include "Responsable.h"
#include "Employe.h"
#include <vector>

class Personnel
{
    public:
        Personnel();
        ~Personnel();
         double SalaireAVerser()const;
         void Add_Emp(Employe* Emp);
    private:
       vector<Employe*>Emp1;
};

#endif // PERSONNEL_H
