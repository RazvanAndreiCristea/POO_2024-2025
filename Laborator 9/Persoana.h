#pragma once
#include <iostream>
#include "StringHelper.h"

class Persoana
{
	int varsta;
	char* numeComplet;

protected:

	virtual void afisare(std::ostream& out) const = 0;

public:

	Persoana();
	Persoana(const int& varsta, const char* numeComplet);
	virtual ~Persoana();

	virtual float getVenit() const = 0;
	friend std::ostream& operator<<(std::ostream& out, const Persoana* const& persoana);
};