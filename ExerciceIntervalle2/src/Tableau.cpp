#include "Tableau.h"
#include "assert.h"

using namespace std;

Tableau::Tableau(int Taille)
{
   this->Taille = Taille;
   this->t = new int[this->Taille];
   for(int i=0;i<this->Taille;i++){
     this->t[i] = 0;
   }
}

Tableau::Tableau(const Tableau& t1)
{
   this->Taille = t1.Taille;
   this->t = new int[this->Taille];
   for(int i=0;i<this->Taille;i++){
     this->t[i] = t1.t[i];
   }
}

void Tableau::operator=(const Tableau& t1)
{
   if(this!=&t1){
     delete this->t;
     this->t = 0;
     this->Taille = t1.Taille;
     this->t = new int[this->Taille];
     for(int i=0;i<this->Taille;i++){
        this->t[i] = t1.t[i];
     }
     }
}

int& Tableau::operator[](const int& Index)const
{
    assert(Index >=0 && Index<this->Taille);
    return this->t[Index];
}

Tableau::~Tableau()
{
    delete[] this->t;
    this->t = 0;
}

