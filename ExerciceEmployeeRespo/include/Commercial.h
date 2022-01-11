#ifndef COMMERCIAL_H
#define COMMERCIAL_H

#include "Employe.h"
class Commercial : public Employe
{
public:
	Commercial(string nom,float indice,float nmbre);
	float CalculSalaire() const override;
	~Commercial();

private:
	float nmbre_ventes;
	static double SalaireTotal;
};

#endif // COMMERCIAL_H
