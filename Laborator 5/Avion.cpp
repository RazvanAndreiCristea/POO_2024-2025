#include "Avion.h"

Avion::Avion()
{
	tipAeronava = nullptr;
	capacitateRezervor = 0.0f;
}

Avion::Avion(const char* tipAeronava, const float& capacitateRezervor)
{
	this->capacitateRezervor = capacitateRezervor;
	this->tipAeronava = copiazaString(tipAeronava);
}

Avion::Avion(const Avion& avion)
{
	capacitateRezervor = avion.capacitateRezervor;
	tipAeronava = copiazaString(avion.tipAeronava);
}

Avion& Avion::operator=(const Avion& avion)
{
	if (this == &avion)
	{
		return *this;
	}

	if (tipAeronava != nullptr)
	{
		delete[] tipAeronava;
	}

	capacitateRezervor = avion.capacitateRezervor;
	tipAeronava = copiazaString(avion.tipAeronava);

	return *this;
}

Avion::~Avion()
{
	if (tipAeronava != nullptr)
	{
		delete[] tipAeronava;
	}
}

char* Avion::getTipAeronava() const
{
	return tipAeronava;
}

float Avion::getCapacitateRezervor() const
{
	return capacitateRezervor;
}

void Avion::setTipAeronava(const char* tipAeronava)
{
	if (tipAeronava == nullptr)
	{
		return;
	}

	if (this->tipAeronava != nullptr)
	{
		delete[] this->tipAeronava;
	}

	this->tipAeronava = copiazaString(tipAeronava);
}

void Avion::setCapacitateRezervor(const float& capacitateRezervor)
{
	if (capacitateRezervor <= 0.0f)
	{
		return;
	}

	this->capacitateRezervor = capacitateRezervor;
}

std::ostream& operator<<(std::ostream& out, const Avion& avion)
{
	out << "Capacitatea rezervorului este: " << avion.capacitateRezervor << " litri\n";
	out << "Tipul aeronavei este: ";

	if (avion.tipAeronava != nullptr)
	{
		out << avion.tipAeronava << '\n';
	}
	else
	{
		out << "N/A\n";
	}

	return out;
}

char* copiazaString(const char* const& sursa)
{
	if (sursa == nullptr)
	{
		return nullptr;
	}

	char* destinatie = new char[strlen(sursa) + 1];
	strcpy(destinatie, sursa);

	return destinatie;
}