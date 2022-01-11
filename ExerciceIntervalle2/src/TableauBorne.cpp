#include "TableauBorne.h"
#include <TableauBorne.h>
#include "Tableau.h"
#include <assert.h>
#include <iostream>

using namespace std;

TableauBorne::TableauBorne(int Taille,float Bi,float Bs)
:Tableau(Taille)
{
   this->BorneInf = Bi;
   this->BorneSup = Bs;
}

int& TableauBorne::operator[](const int& Index)const
{
   assert(Index>=0 && Index<this->Tableau::Taille);
     return this->Tableau::t[Index];
}

void TableauBorne::operator()(int Index,int Data)
{
   assert(Data>=BorneInf && Data<=BorneSup);
      this->operator[](Index) = Data;
}


TableauBorne::~TableauBorne()
{
  cout<<"destructeur de la classe TableauBorne"<<endl;
}
