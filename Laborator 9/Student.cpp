#include "Student.h"

void Student::afisare(std::ostream& out) const
{
	out << "Facultatea la care invata studentul este: ";

	if (facultate != nullptr)
	{
		out << facultate << '\n';
	}
	else
	{
		out << "N/A\n";
	}

	out << "Studentul este bursier? -> ";
	esteBursier ? out << "DA\n" : out << "NU\n";
}

Student::Student() : Persoana()
{
	esteBursier = false;
	facultate = nullptr;
}

Student::Student(const int& varsta, const char* numeComplet, const char* facultate, const bool& esteBursier) : Persoana(varsta, numeComplet)
{
	this->esteBursier = esteBursier;
	this->facultate = copiazaString(facultate);
}

Student::~Student()
{
	if (facultate != nullptr)
	{
		delete[] facultate;
	}
}

float Student::getVenit() const
{
	return esteBursier ? 1200.0f : 0.0f;
}