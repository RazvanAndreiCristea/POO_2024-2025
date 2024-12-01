#include "Profesor.h"

void Profesor::afisare(std::ostream& out) const
{
	out << "Disciplina predata de profesor este: ";

	if (disciplinaPredata != nullptr)
	{
		out << disciplinaPredata << '\n';
	}
	else
	{
		out << "N/A\n";
	}

	out << "Profesorul este diriginte? -> ";
	esteDiriginte ? out << "DA\n" : out << "NU\n";
}

Profesor::Profesor() : Persoana()
{
	esteDiriginte = false;
	disciplinaPredata = nullptr;
}

Profesor::Profesor(const int& varsta, const char* numeComplet, const char* disciplinaPredata, const bool& esteDiriginte) : Persoana(varsta, numeComplet)
{
	this->esteDiriginte = esteDiriginte;
	this->disciplinaPredata = copiazaString(disciplinaPredata);
}

Profesor::~Profesor()
{
	if (disciplinaPredata != nullptr)
	{
		delete[] disciplinaPredata;
	}
}

float Profesor::getVenit() const
{
	return esteDiriginte ? 6200.0f : 5500.0f;
}