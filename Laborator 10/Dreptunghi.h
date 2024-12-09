#pragma once
#include "FiguraGeometrica.h"

class Dreptunghi : public FiguraGeometrica
{
	char* culoare;
	int grosimeLinie;

protected:

	void afisare(std::ostream& out) const override;

public:

	Dreptunghi();
	Dreptunghi(const char* culoare, const int& grosimeLinie);
	~Dreptunghi();

	char* getCuloare() const override;
	int getGrosimeLinie() const override;
	TipFigura getTipFigura() const override;
};