#ifndef RESPONSABLE_H
#define RESPONSABLE_H
#include "Employe.h"
#include <vector>


class Responsable:public Employe
{
    public:
        Responsable(string Nom,double IndiceSal,string Titre);
        Responsable();
        void Afficher()const;
        void Add_Subord(Employe *Emp);

        ~Responsable();
    private:
        string Titre;
        vector<Employe*> Subord;
};

#endif // RESPONSABLE_H
