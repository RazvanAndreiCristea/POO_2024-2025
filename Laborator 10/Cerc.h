#pragma once
#include "FiguraGeometrica.h"

class Cerc : public FiguraGeometrica
{
	char* culoare;
	int grosimeLinie;

protected:

	void afisare(std::ostream& out) const override;

public:

	Cerc();
	Cerc(const char* culoare, const int& grosimeLinie);
	~Cerc();

	char* getCuloare() const override;
	int getGrosimeLinie() const override;
	TipFigura getTipFigura() const override;
};