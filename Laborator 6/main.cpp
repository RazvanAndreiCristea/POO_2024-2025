#include "SortingHelper.h"

int main()
{
	Student studenti[3]
	{
		Student("Ionescu Vlad", 9.85f),
		Student("Georgescu Alexandru", 8.37f),
		Student("Mihailescu Antonia", 10.0f)
	};

	int nrClase = 4;

	Clasa* clase = new Clasa[nrClase];

	clase[0] = Clasa(3, "XI A", Diriginte("Popa Marcel", 6000.0f, "Matematica", 500.0f), studenti);
	clase[1] = Clasa(3, "XII B", Diriginte("Zamfiroiu Bogdan", 4000.0f, "Istorie", 500.0f), studenti);
	clase[2] = Clasa(3, "IX C", Diriginte("Andreescu Maria", 5500.0f, "Romana", 500.0f), studenti);
	clase[3] = Clasa(3, "VIII D", Diriginte("Antonescu Raluca", 3500.0f, "Franceza", 500.0f), studenti);

	for (int j = 0; j < nrClase; j++)
	{
		std::cout << clase[j];
	}

	SortingHelper::sortareClase(nrClase, clase);

	std::cout << "=============================================================\n";
	std::cout << "Clasele dupa sortare vor aparea mai jos.\n";
	std::cout << "=============================================================\n\n";

	for (int j = 0; j < nrClase; j++)
	{
		std::cout << clase[j];
	}

	delete[] clase;

	return 0;
}