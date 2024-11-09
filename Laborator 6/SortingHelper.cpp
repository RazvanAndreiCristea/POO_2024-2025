#include "SortingHelper.h"

void SortingHelper::interschimbare(Clasa& c1, Clasa& c2)
{
	Clasa aux = c1;
	c1 = c2;
	c2 = aux;
}

void SortingHelper::sortareClase(const int& nrClase, Clasa*& clase)
{
	if (clase == nullptr)
	{
		return;
	}

	for (int i = 0; i < nrClase - 1; i++)
	{
		for (int j = i + 1; j < nrClase; j++)
		{
			if (clase[i] > clase[j])
			{
				SortingHelper::interschimbare(clase[i], clase[j]);
			}
		}
	}
}