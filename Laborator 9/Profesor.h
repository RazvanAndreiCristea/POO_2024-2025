#pragma once
#include "Persoana.h"

class Profesor : public Persoana
{
	bool esteDiriginte;
	char* disciplinaPredata;

protected:

	void afisare(std::ostream& out) const override;

public:

	Profesor();
	Profesor(const int& varsta, const char* numeComplet, const char* disciplinaPredata, const bool& esteDiriginte);
	~Profesor();

	float getVenit() const override;
};