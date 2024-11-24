#include "NrComplex.h"

NrComplex::NrComplex(const float& real, const float& imaginar)
{
	this->real = real;
	this->imaginar = imaginar;
}

float NrComplex::getModul() const
{
	return(float)sqrt(pow(real, 2) + pow(imaginar, 2));
}

bool NrComplex::operator<(const NrComplex& z) const
{
	return this->getModul() < z.getModul();
}

std::ostream& operator<<(std::ostream& out, const NrComplex& z)
{
	out << "Partea reala a numarului complex este: " << z.real << '\n';
	out << "Partea imaginara a numarului complex este: " << z.imaginar << '\n';
	out << "Modulul numarului complex este: " << z.getModul() << '\n';

	return out;
}