#include "Persoana.h"

Persoana::Persoana()
{
	nume = nullptr;
}

Persoana::Persoana(const char* nume)
{
	this->nume = copiazaString(nume);
}

Persoana::Persoana(const Persoana& persoana)
{
	this->nume = copiazaString(persoana.nume);
}

Persoana& Persoana::operator=(const Persoana& persoana)
{
	if (this == &persoana)
	{
		return *this;
	}

	if (this->nume != nullptr)
	{
		delete[] this->nume;
	}

	this->nume = copiazaString(persoana.nume);

	return *this;
}

Persoana::~Persoana()
{
	if (nume != nullptr)
	{
		delete[] nume;
	}
}

std::ostream& operator<<(std::ostream& out, const Persoana& persoana)
{
	out << "Numele persoanei este: ";

	if (persoana.nume != nullptr)
	{
		out << persoana.nume << '\n';
	}
	else
	{
		out << "N/A\n";
	}

	return out;
}