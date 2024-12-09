#include "Patrat.h"

void Patrat::afisare(std::ostream& out) const
{
	out << "Lungimea laturii patratului este: " << latura << '\n';
	out << "Grosimea liniei patratului este: " << getGrosimeLinie() << '\n';
	out << "Culoarea patratului este: ";

	if (getCuloare() != nullptr)
	{
		out << getCuloare() << '\n';
	}
	else
	{
		out << "N/A\n";
	}
}

Patrat::Patrat() : Dreptunghi()
{
	latura = 0.0f;
}

Patrat::Patrat(const char* culoare, const int& grosimeLatura, const float& latura) : Dreptunghi(culoare, grosimeLatura)
{
	this->latura = latura;
}

TipFigura Patrat::getTipFigura() const
{
	return TipFigura::kPATRAT;
}