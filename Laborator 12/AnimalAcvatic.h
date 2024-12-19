#pragma once
#include "Animal.h"

class AnimalAcvatic : virtual public Animal
{
	float vitezaDeplasare; // viteza acvatica

protected:

	void afisare(std::ostream& out) const override;

public:

	AnimalAcvatic();
	AnimalAcvatic(const char* culoare, const float& vitezaAnimal, const float& vitezaAcvatica);

	float getVitezaDeplasare() const override;
};