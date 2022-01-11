#include "responsable.h"

Responsable::Responsable(string Nom,double IndiceSal,string Titre)
:Employe(Nom,IndiceSal)
{
    this->Titre = Titre;
    this->Subord = vector<Employe*>();
}

void Responsable::Afficher()const
{
   Employe::Afficher();
   cout<<this->Titre<<endl;
   for(int i=0;i<this->Subord.size();i++){
      this->Subord[i]->Afficher();
}
}

void Responsable::Add_Subord(Employe *Emp)
{
    this->Subord.push_back(Emp);
}

Responsable::~Responsable()
{
  cout<<"Destructeur de la classe Responsable : "<<endl;
}
