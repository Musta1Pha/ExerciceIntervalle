#ifndef TABLEAU_H
#define TABLEAU_H

using namespace std;
class Tableau
{
   protected:
     int *t;
     int Taille;
   public:
     Tableau(int Taille);
     Tableau(const Tableau& t1);
     void operator=(const Tableau& t1);
     virtual int& operator[](const int& Index)const;
     ~Tableau();
};

#endif // TABLEAU_H
