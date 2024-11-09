#include "Sifonier.h"

int main()
{
	Sifonier s;

	s.setPret(599.99f);
	s.setCuloare("Alb");
	s.setNumarSertare(4);
	s.setProducator("Mobilia");

	s.afisare();
	std::cout << '\n';

	int nrSifoniere = 4;
	Sifonier* sifoniere = new Sifonier[nrSifoniere];

	sifoniere[0] = Sifonier(749.99f, "Negru", "Mob Expert", 8);
	sifoniere[1] = Sifonier(449.99f, "Maro", "Pro Mob Expert", 6);
	sifoniere[2] = Sifonier(999.99f, "Bej", "Alpha Mob Pro", 3);
	sifoniere[3] = Sifonier(800.0f, "Gri", "Super Mob Expert", 9);

	for (int j = 0; j < nrSifoniere; j++)
	{
		sifoniere[j].afisare();
		std::cout << '\n';
	}

	std::cout << "\n====================================================\n\n";

	for (int i = 0; i < nrSifoniere - 1; i++)
	{
		for (int j = i + 1; j < nrSifoniere; j++)
		{
			if (strcmp(sifoniere[i].getProducator(), sifoniere[j].getProducator()) > 0)
			{
				Sifonier aux = sifoniere[i];
				sifoniere[i] = sifoniere[j];
				sifoniere[j] = aux;
			}
		}
	}

	for (int j = 0; j < nrSifoniere; j++)
	{
		sifoniere[j].afisare();
		std::cout << '\n';
	}

	int index = 0;
	float pretMaxim = 0.0f;

	for (int j = 0; j < nrSifoniere; j++)
	{
		if (pretMaxim < sifoniere[j].getPret())
		{
			index = j;
			pretMaxim = sifoniere[j].getPret();
		}
	}

	std::cout << "==============================================\n"
		<< "Sifonierul cu pretul maxim este afisat mai jos\n"
		<< "==============================================\n\n";

	sifoniere[index].afisare();

	delete[] sifoniere;

	return 0;
}