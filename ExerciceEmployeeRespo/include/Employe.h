#ifndef EMPLOYE_H
#define EMPLOYE_H
#include <iostream>
using namespace std;

class Employe
{
    public:
        Employe(string Nom,double IndiceSal);
        virtual float CalculSalaire()const;
        virtual void Afficher() const;
        ~Employe();
    private:
        string Nom;
        const int Matricule;
        static int Cpt;
        double Indice_Sal;
        static int Val;
};

#endif // EMPLOYE_H
