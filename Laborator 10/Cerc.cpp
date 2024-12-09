#include "Cerc.h"

void Cerc::afisare(std::ostream& out) const
{
	out << "Grosimea liniei cercului este: " << grosimeLinie << '\n';
	out << "Culoarea cercului este: ";

	if (culoare != nullptr)
	{
		out << culoare << '\n';
	}
	else
	{
		out << "N/A\n";
	}
}

Cerc::Cerc()
{
	grosimeLinie = 0;
	culoare = nullptr;
}

Cerc::Cerc(const char* culoare, const int& grosimeLinie)
{
	this->grosimeLinie = grosimeLinie;
	this->culoare = copiazaString(culoare);
}

Cerc::~Cerc()
{
	if (culoare != nullptr)
	{
		delete[] culoare;
	}
}

char* Cerc::getCuloare() const
{
	return culoare;
}

int Cerc::getGrosimeLinie() const
{
	return grosimeLinie;
}

TipFigura Cerc::getTipFigura() const
{
	return TipFigura::kCERC;
}