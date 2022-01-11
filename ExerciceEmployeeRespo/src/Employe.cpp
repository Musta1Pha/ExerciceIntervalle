#include "Employe.h"
using namespace std;

int Employe::Cpt=0;
int Employe::Val=50;

Employe::Employe(string Nom,double IndiceSal)
:Matricule(++Employe::Cpt)
{
    this->Nom = Nom;
    this->Indice_Sal = IndiceSal;
}

float Employe::CalculSalaire()const
{
   return this->Indice_Sal*Employe::Val;
}

void Employe::Afficher()const
{
   cout<<"Afficher de la classe Employe : "<<endl;
   cout<<this->Nom<<endl;
   cout<<this->Indice_Sal<<endl;
   cout<<this->CalculSalaire()<<endl;
}

Employe::~Employe()
{
   cout<<"destructeur de la classe employe : "<<endl;
}
