#pragma once
#include <iostream>
#include "StringHelper.h"

class Animal
{
	char* culoare;
	float vitezaDeplasare;

protected:

	virtual void afisare(std::ostream& out) const;

public:

	Animal();
	Animal(const char* culoare, const float& vitezaDeplasare);
	virtual ~Animal();

	virtual float getVitezaDeplasare() const;

	bool operator>(const Animal& animal) const;
	friend std::ostream& operator<<(std::ostream& out, const Animal* const& animal);
};