#include "Amfibian.h"

void Amfibian::afisare(std::ostream& out) const
{
	Animal::afisare(out);
	out << "\nViteza de deplasare acvatica a amfibianului este: " << AnimalAcvatic::getVitezaDeplasare() << " m/s\n";
	out << "Viteza de deplasare terestra a amfibianului este: " << AnimalTerestru::getVitezaDeplasare() << " m/s\n";
	out << "Viteza medie de deplasare a amfibianului este: " << getVitezaDeplasare() << " m/s\n";
	out << "Numele amfibianului este: ";

	if (nume != nullptr)
	{
		out << nume;
	}
	else
	{
		out << "N/A";
	}
}

Amfibian::Amfibian() : Animal(), AnimalTerestru(), AnimalAcvatic()
{
	nume = nullptr;
}

Amfibian::Amfibian(const char* culoare, const float& vitezaAnimal, const float& vitezaTerestra, const float& vitezaAcvatica, const char* nume) : Animal(culoare, vitezaAnimal),
AnimalTerestru(culoare, vitezaAnimal, vitezaTerestra), AnimalAcvatic(culoare, vitezaAnimal, vitezaAcvatica)
{
	this->nume = copiazaString(nume);
}

Amfibian::~Amfibian()
{
	if (nume != nullptr)
	{
		delete[] nume;
	}
}

float Amfibian::getVitezaDeplasare() const
{
	return (AnimalTerestru::getVitezaDeplasare() + AnimalAcvatic::getVitezaDeplasare() - Animal::getVitezaDeplasare()) / 2;
}