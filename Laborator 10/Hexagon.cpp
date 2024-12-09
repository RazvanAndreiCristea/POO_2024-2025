#include "Hexagon.h"

void Hexagon::afisare(std::ostream& out) const
{
	out << "Grosimea liniei hexagonului este: " << grosimeLinie << '\n';
	out << "Culoarea hexagonului este: ";

	if (culoare != nullptr)
	{
		out << culoare << '\n';
	}
	else
	{
		out << "N/A\n";
	}
}

Hexagon::Hexagon()
{
	grosimeLinie = 0;
	culoare = nullptr;
}

Hexagon::Hexagon(const char* culoare, const int& grosimeLinie)
{
	this->grosimeLinie = grosimeLinie;
	this->culoare = copiazaString(culoare);
}

Hexagon::~Hexagon()
{
	if (culoare != nullptr)
	{
		delete[] culoare;
	}
}

char* Hexagon::getCuloare() const
{
	return culoare;
}

int Hexagon::getGrosimeLinie() const
{
	return grosimeLinie;
}

TipFigura Hexagon::getTipFigura() const
{
	return TipFigura::kHEXAGON;
}