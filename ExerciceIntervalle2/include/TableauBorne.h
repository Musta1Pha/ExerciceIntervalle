#ifndef TABLEAUBORNE_H
#define TABLEAUBORNE_H
#include <Tableau.h>

using namespace std;

class TableauBorne:public Tableau
{
    private:
      float BorneInf;
      float BorneSup;
    public:
      TableauBorne(int Taille,float Bi,float Bs);
      int& operator[](const int& Index)const override;
      void operator()(int Index,int Data);
      ~TableauBorne();
};

#endif // TABLEAUBORNE_H
