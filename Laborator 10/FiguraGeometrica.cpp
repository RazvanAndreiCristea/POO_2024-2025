#include "FiguraGeometrica.h"

FiguraGeometrica::~FiguraGeometrica() {}

bool FiguraGeometrica::operator<(const FiguraGeometrica& f2) const
{
	return this->getTipFigura() < f2.getTipFigura();
}

std::ostream& operator<<(std::ostream& out, const FiguraGeometrica& figuraGeometrica)
{
	figuraGeometrica.afisare(out);
	return out;
}

std::ostream& operator<<(std::ostream& out, const FiguraGeometrica* const& figuraGeometrica)
{
	figuraGeometrica->afisare(out);
	return out;
}