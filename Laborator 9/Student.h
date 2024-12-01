#pragma once
#include "Persoana.h"

class Student : public Persoana
{
	char* facultate;
	bool esteBursier;

protected:

	void afisare(std::ostream& out) const override;

public:

	Student();
	Student(const int& varsta, const char* numeComplet, const char* facultate, const bool& esteBursier);
	~Student();

	float getVenit() const override;
};