#pragma once
#include "FiguraGeometrica.h"

class Hexagon : public FiguraGeometrica
{
	char* culoare;
	int grosimeLinie;

protected:

	void afisare(std::ostream& out) const override;

public:

	Hexagon();
	Hexagon(const char* culoare, const int& grosimeLinie);
	~Hexagon();

	char* getCuloare() const override;
	int getGrosimeLinie() const override;
	TipFigura getTipFigura() const override;
};