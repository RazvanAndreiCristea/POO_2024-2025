#include "Animal.h"

void Animal::afisare(std::ostream& out) const
{
	out << "Viteza de deplasare a animalului este: " << vitezaDeplasare << " m/s\n";
	out << "Culoarea animalului este: ";

	if (culoare != nullptr)
	{
		out << culoare;
	}
	else
	{
		out << "N/A";
	}
}

Animal::Animal()
{
	culoare = nullptr;
	vitezaDeplasare = 0.0f;
}

Animal::Animal(const char* culoare, const float& vitezaDeplasare)
{
	this->culoare = copiazaString(culoare);
	this->vitezaDeplasare = vitezaDeplasare;
}

Animal::~Animal()
{
	if (culoare != nullptr)
	{
		delete[] culoare;
	}
}

float Animal::getVitezaDeplasare() const
{
	return vitezaDeplasare;
}

bool Animal::operator>(const Animal& animal) const
{
	return this->getVitezaDeplasare() > animal.getVitezaDeplasare();
}

std::ostream& operator<<(std::ostream& out, const Animal* const& animal)
{
	animal->afisare(out);

	out << '\n';

	return out;
}