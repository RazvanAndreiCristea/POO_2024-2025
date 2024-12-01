#include "Persoana.h"

Persoana::Persoana()
{
	varsta = 0;
	numeComplet = nullptr;
}

Persoana::Persoana(const int& varsta, const char* numeComplet)
{
	this->varsta = varsta;
	this->numeComplet = copiazaString(numeComplet);
}

Persoana::~Persoana()
{
	if (numeComplet != nullptr)
	{
		delete[] numeComplet;
	}
}

std::ostream& operator<<(std::ostream& out, const Persoana* const& persoana)
{
	out << "Numele complet al persoanei este: ";

	if (persoana->numeComplet != nullptr)
	{
		out << persoana->numeComplet << '\n';
	}
	else
	{
		out << "N/A\n";
	}

	out << "Varsta persoanei este: " << persoana->varsta << " ani\n";

	persoana->afisare(out);

	return out;
}