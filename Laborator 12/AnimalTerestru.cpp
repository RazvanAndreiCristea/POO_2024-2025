#include "AnimalTerestru.h"

void AnimalTerestru::afisare(std::ostream& out) const
{
	Animal::afisare(out);
	out << "\nViteza de deplasare a unui animal terestru este: " << getVitezaDeplasare() << " m/s";
}

AnimalTerestru::AnimalTerestru() : Animal()
{
	vitezaDeplasare = 0.0f;
}

AnimalTerestru::AnimalTerestru(const char* culoare, const float& vitezaAnimal, const float& vitezaTerestra) : Animal(culoare, vitezaAnimal)
{
	this->vitezaDeplasare = vitezaTerestra;
}

float AnimalTerestru::getVitezaDeplasare() const
{
	return vitezaDeplasare + Animal::getVitezaDeplasare();
}