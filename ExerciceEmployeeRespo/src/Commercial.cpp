#include "Commercial.h"
using namespace std;

Commercial::Commercial(string nom,float indice,float nmbre)
    : Employe(nom,indice)
{
    this->nmbre_ventes = nmbre;
}

float Commercial::CalculSalaire() const
{
    float salaire = this->Employe::CalculSalaire() + (this->nmbre_ventes / 100);
    return salaire;
}

Commercial::~Commercial()
{
  cout<<"Destructeur de la classe Commercial"<<endl;
}
