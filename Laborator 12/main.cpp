#include "Amfibian.h"

int main()
{
	int nrAnimale = 10;
	Animal** animale = new Animal * [nrAnimale];

	animale[0] = new Amfibian("galben", 2.0f, 0.5f, 1.5f, "Salamandra");
	animale[1] = new AnimalTerestru("maro", 5.0f, 4.5f);
	animale[2] = new Animal("alb", 2.8f);
	animale[3] = new Amfibian("verde", 0.5f, 1.75f, 1.25f, "Praslea");
	animale[4] = new Animal("portocaliu", 4.5f);
	animale[5] = new Amfibian("auriu", 3.0f, 1.2f, 1.8f, "Greuceanu");
	animale[6] = new AnimalAcvatic("negru", 1.5f, 3.5f);
	animale[7] = new Amfibian("alb", 0.5f, 3.5f, 1.0f, "Harap-Alb");
	animale[8] = new AnimalTerestru("gri", 2.0f, 3.5f);
	animale[9] = new AnimalAcvatic("turcoaz", 0.8f, 1.0f);

	for (int j = 0; j < nrAnimale; j++)
	{
		std::cout << animale[j] << '\n';
	}

	for (int i = 0; i < nrAnimale - 1; i++)
	{
		for (int j = i + 1; j < nrAnimale; j++)
		{
			if (*animale[i] > *animale[j])
			{
				Animal* aux = animale[i];
				animale[i] = animale[j];
				animale[j] = aux;
			}
		}
	}

	std::cout << "======================================== Dupa sortare ========================================\n\n";

	for (int j = 0; j < nrAnimale; j++)
	{
		std::cout << animale[j] << '\n';
	}

	for (int j = 0; j < nrAnimale; j++)
	{
		delete animale[j];
	}

	delete[] animale;

	return 0;
}