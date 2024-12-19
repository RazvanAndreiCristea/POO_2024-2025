#pragma once
#include "AnimalAcvatic.h"
#include "AnimalTerestru.h"

class Amfibian : public AnimalTerestru, public AnimalAcvatic
{
	char* nume;

protected:

	void afisare(std::ostream& out) const override;

public:

	Amfibian();
	Amfibian(const char* culoare, const float& vitezaAnimal, const float& vitezaTerestra, const float& vitezaAcvatica, const char* nume);
	~Amfibian();

	float getVitezaDeplasare() const override;
};