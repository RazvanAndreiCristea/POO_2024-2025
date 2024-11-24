#include "MijlocTransport.h"

MijlocTransport::MijlocTransport()
{
	culoare = nullptr;
	producator = nullptr;
}

MijlocTransport::MijlocTransport(const char* culoare, const char* producator)
{
	this->culoare = copiazaString(culoare);
	this->producator = copiazaString(producator);
}

MijlocTransport::MijlocTransport(const MijlocTransport& mijlocTransport)
{
	culoare = copiazaString(mijlocTransport.culoare);
	producator = copiazaString(mijlocTransport.producator);
}

MijlocTransport& MijlocTransport::operator=(const MijlocTransport& mijlocTransport)
{
	if (this == &mijlocTransport)
	{
		return *this;
	}

	if (culoare != nullptr)
	{
		delete[] culoare;
	}

	if (producator != nullptr)
	{
		delete[] producator;
	}

	culoare = copiazaString(mijlocTransport.culoare);
	producator = copiazaString(mijlocTransport.producator);

	return *this;
}

MijlocTransport::~MijlocTransport()
{
	if (culoare != nullptr)
	{
		delete[] culoare;
	}

	if (producator != nullptr)
	{
		delete[] producator;
	}
}

std::ostream& operator<<(std::ostream& out, const MijlocTransport& mijlocTransport)
{
	out << "Culoarea mijlocului de transport este: ";
	out << "Producatorul mijlocului de transport este: ";

	if (mijlocTransport.culoare)
	{
		out << mijlocTransport.culoare << '\n';
	}
	else
	{
		out << "NaN\n";
	}

	if (mijlocTransport.producator)
	{
		out << mijlocTransport.producator << '\n';
	}
	else
	{
		out << "NaN\n";
	}

	return out;
}