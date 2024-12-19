#pragma once
#include "Animal.h"

class AnimalTerestru : virtual public Animal
{
	float vitezaDeplasare; // viteza terestra

protected:

	void afisare(std::ostream& out) const override;

public:

	AnimalTerestru();
	AnimalTerestru(const char* culoare, const float& vitezaAnimal, const float& vitezaTerestra);

	float getVitezaDeplasare() const override;
};