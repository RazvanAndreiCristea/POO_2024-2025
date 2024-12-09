#pragma once
#include "Dreptunghi.h"

class Patrat : public Dreptunghi
{
	float latura;

protected:

	void afisare(std::ostream& out) const override;

public:

	Patrat();
	Patrat(const char* culoare, const int& grosimeLatura, const float& latura);

	TipFigura getTipFigura() const override;
};