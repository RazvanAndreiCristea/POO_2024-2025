#include "AvionMilitar.h"

int main()
{
	Avion avion("Boeing 737", 650);
	AvionMilitar avionMilitar("Aero L-39 Albatros", 800.0f, "Marcel", 950);

	std::cout << avion << '\n';
	std::cout << avionMilitar << '\n';

	avion = avionMilitar;

	std::cout << avion << '\n';

	avionMilitar.setCapacitateRezervor(750.0f);

	std::cout << avionMilitar;

	return 0;
}