#include "Profesor.h"

Profesor::Profesor()
{
	salariu = 0.0f;
	disciplinaPredata = nullptr;
}

Profesor::Profesor(const float& salariu, const char* disciplinaPredata)
{
	this->salariu = salariu;
	this->disciplinaPredata = copiazaString(disciplinaPredata);
}

Profesor::Profesor(const Profesor& profesor)
{
	this->salariu = profesor.salariu;
	this->disciplinaPredata = copiazaString(profesor.disciplinaPredata);
}

Profesor& Profesor::operator=(const Profesor& profesor)
{
	if (this == &profesor)
	{
		return *this;
	}

	if (this->disciplinaPredata != nullptr)
	{
		delete[] this->disciplinaPredata;
	}

	this->salariu = profesor.salariu;
	this->disciplinaPredata = copiazaString(profesor.disciplinaPredata);

	return *this;
}

Profesor::~Profesor()
{
	if (disciplinaPredata != nullptr)
	{
		delete[] disciplinaPredata;
	}
}

float Profesor::getSalariu() const
{
	return salariu;
}

std::ostream& operator<<(std::ostream& out, const Profesor& profesor)
{
	out << "Salariul profului este: " << profesor.salariu << '\n';
	out << "Disciplina pe care o preda proful este: ";

	if (profesor.disciplinaPredata != nullptr)
	{
		out << profesor.disciplinaPredata << '\n';
	}
	else
	{
		out << "NaN\n";
	}

	return out;
}