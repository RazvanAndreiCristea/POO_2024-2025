#include "Dreptunghi.h"

void Dreptunghi::afisare(std::ostream& out) const
{
	out << "Grosimea liniei dreptunghiului este: " << grosimeLinie << '\n';
	out << "Culoarea dreptunghiului este: ";

	if (culoare != nullptr)
	{
		out << culoare << '\n';
	}
	else
	{
		out << "N/A\n";
	}
}

Dreptunghi::Dreptunghi()
{
	grosimeLinie = 0;
	culoare = nullptr;
}

Dreptunghi::Dreptunghi(const char* culoare, const int& grosimeLinie)
{
	this->grosimeLinie = grosimeLinie;
	this->culoare = copiazaString(culoare);
}

Dreptunghi::~Dreptunghi()
{
	if (culoare != nullptr)
	{
		delete[] culoare;
	}
}

char* Dreptunghi::getCuloare() const
{
	return culoare;
}

int Dreptunghi::getGrosimeLinie() const
{
	return grosimeLinie;
}

TipFigura Dreptunghi::getTipFigura() const
{
	return TipFigura::kDREPTUNGHI;
}