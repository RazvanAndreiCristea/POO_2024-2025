#include "AnimalAcvatic.h"

void AnimalAcvatic::afisare(std::ostream& out) const
{
	Animal::afisare(out);
	out << "\nViteza de deplasare a unui animal avatic este: " << getVitezaDeplasare() << " m/s";
}

AnimalAcvatic::AnimalAcvatic() : Animal()
{
	vitezaDeplasare = 0.0f;
}

AnimalAcvatic::AnimalAcvatic(const char* culoare, const float& vitezaAnimal, const float& vitezaAcvatica) : Animal(culoare, vitezaAnimal)
{
	this->vitezaDeplasare = vitezaAcvatica;
}

float AnimalAcvatic::getVitezaDeplasare() const
{
	return vitezaDeplasare + Animal::getVitezaDeplasare();
}