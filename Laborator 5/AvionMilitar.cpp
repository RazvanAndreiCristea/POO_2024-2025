#include "AvionMilitar.h"

AvionMilitar::AvionMilitar() : Avion()
{
	vitezaMaxima = 0;
	numePilot = nullptr;
}

AvionMilitar::AvionMilitar(const char* tipAeronava, const float& capacitateRezervor,
	const char* numePilot, const int& vitezaMaxima) : Avion(tipAeronava, capacitateRezervor)
{
	this->vitezaMaxima = vitezaMaxima;
	this->numePilot = copiazaString(numePilot);
}

AvionMilitar::AvionMilitar(const AvionMilitar& avionMilitar) : Avion(avionMilitar)
{
	vitezaMaxima = avionMilitar.vitezaMaxima;
	numePilot = copiazaString(avionMilitar.numePilot);
}

AvionMilitar& AvionMilitar::operator=(const AvionMilitar& avionMilitar)
{
	if (this == &avionMilitar)
	{
		return *this;
	}

	Avion::operator=(avionMilitar);

	if (numePilot != nullptr)
	{
		delete[] numePilot;
	}

	vitezaMaxima = avionMilitar.vitezaMaxima;
	numePilot = copiazaString(avionMilitar.numePilot);

	return *this;
}

AvionMilitar::~AvionMilitar()
{
	if (numePilot != nullptr)
	{
		delete[] numePilot;
	}
}

char* AvionMilitar::getNumePilot() const
{
	return numePilot;
}

int AvionMilitar::getVitezaMaxima() const
{
	return vitezaMaxima;
}

void AvionMilitar::setNumePilot(const char* numePilot)
{
	if (numePilot == nullptr)
	{
		return;
	}

	if (this->numePilot)
	{
		delete[] this->numePilot;
	}

	this->numePilot = copiazaString(numePilot);
}

void AvionMilitar::setVitezaMaxima(const int& vitezaMaxima)
{
	if (vitezaMaxima <= 0)
	{
		return;
	}

	this->vitezaMaxima = vitezaMaxima;
}

std::ostream& operator<<(std::ostream& out, const AvionMilitar& avionMilitar)
{
	operator<<(out, (Avion&)avionMilitar);

	out << "Viteza maxima pe care o poate atinge avionul este: " << avionMilitar.vitezaMaxima << " km/h\n";
	out << "Numele pilotului este: ";

	if (avionMilitar.numePilot != nullptr)
	{
		out << avionMilitar.numePilot << '\n';
	}
	else
	{
		out << "N/A\n";
	}

	return out;
}