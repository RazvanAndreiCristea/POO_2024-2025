#include "Diriginte.h"

Diriginte::Diriginte() : Persoana(), Profesor()
{
	sporDirigentie = 0.0f;
}

Diriginte::Diriginte(const char* nume, const float& salariu,
	const char* disciplinaPredata, const float& sporDirigentie) : Persoana(nume), Profesor(salariu, disciplinaPredata)
{
	this->sporDirigentie = sporDirigentie;
}

Diriginte::Diriginte(const Diriginte& diriginte) : Persoana(diriginte), Profesor(diriginte)
{
	sporDirigentie = diriginte.sporDirigentie;
}

Diriginte& Diriginte::operator=(const Diriginte& diriginte)
{
	if (this == &diriginte)
	{
		return *this;
	}

	Persoana::operator=(diriginte);
	Profesor::operator=(diriginte);

	sporDirigentie = diriginte.sporDirigentie;

	return *this;
}

Diriginte::~Diriginte()
{

}

float Diriginte::getSalariuDiriginte() const
{
	return sporDirigentie + getSalariu();
}

std::ostream& operator<<(std::ostream& out, const Diriginte& diriginte)
{
	out << (Persoana&)diriginte;
	out << (Profesor&)diriginte;

	out << "Salariul dirigintelui este: " << diriginte.getSalariuDiriginte() << '\n';

	return out;
}