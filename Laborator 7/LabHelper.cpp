#include "LabHelper.h"

void interschimbare(Metrou& m1, Metrou& m2)
{
	Metrou aux = m1;
	m1 = m2;
	m2 = aux;
}

void sortareMetrouri(Metrou*& metrouri, const int& dimensiune)
{
	for (int i = 0; i < dimensiune - 1; i++)
	{
		for (int j = i + 1; j < dimensiune; j++)
		{
			if (metrouri[i] > metrouri[j])
			{
				interschimbare(metrouri[i], metrouri[j]);
			}
		}
	}
}

int calculezaTotalLocuriMetrou(const Metrou& metrou)
{
	if (metrou.getVagoane() == nullptr)
	{
		return 0;
	}

	int nrVagoane = metrou.getNrVagoane();
	Vagon* vagoane = metrou.getVagoane();

	int nrTotalLocuri = 0;

	for (int j = 0; j < nrVagoane; j++)
	{
		nrTotalLocuri += vagoane->getNrLocuri();
	}

	return nrTotalLocuri;
}

void afisareGarnituri(const Metrou* const& metrouri, const int& nrGarnituri)
{
	for (int j = 0; j < nrGarnituri; j++)
	{
		std::cout << metrouri[j] << '\n';
	}
}