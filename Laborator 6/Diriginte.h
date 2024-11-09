#pragma once
#include "Persoana.h"
#include "Profesor.h"

class Diriginte : public Persoana, public Profesor
{
	float sporDirigentie;

public:

	Diriginte();
	Diriginte(const char* nume, const float& salariu, const char* disciplinaPredata, const float& sporDirigentie);
	Diriginte(const Diriginte& diriginte);
	Diriginte& operator=(const Diriginte& diriginte);
	~Diriginte();

	float getSalariuDiriginte() const;

	friend std::ostream& operator<<(std::ostream& out, const Diriginte& diriginte);
};