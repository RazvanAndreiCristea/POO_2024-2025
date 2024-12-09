#include "Cerc.h"
#include "Patrat.h"
#include "Hexagon.h"

int main()
{
	int nrFiguri = 10;
	FiguraGeometrica** figuri = new FiguraGeometrica * [nrFiguri];

	figuri[0] = new Dreptunghi("albastru", 6);
	figuri[1] = new Cerc("verde", 8);
	figuri[2] = new Patrat("rosu", 10, 2.5f);
	figuri[3] = new Hexagon("violet", 7);
	figuri[4] = new Cerc("portocaliu", 2);
	figuri[5] = new Patrat("turcoaz", 11, 3);
	figuri[6] = new Hexagon("roz", 14);
	figuri[7] = new Cerc("vernil", 1);
	figuri[8] = new Dreptunghi("gri", 5);
	figuri[9] = new Hexagon("galben", 7);

	for (int j = 0; j < nrFiguri; j++)
	{
		std::cout << *figuri[j] << '\n';
	}

	for (int i = 0; i < nrFiguri - 1; i++)
	{
		for (int j = i + 1; j < nrFiguri; j++)
		{
			if (*figuri[i] < *figuri[j])
			{
				FiguraGeometrica* aux = figuri[i];
				figuri[i] = figuri[j];
				figuri[j] = aux;
			}
		}
	}

	std::cout << "===========================================================\n\n";

	for (int j = 0; j < nrFiguri; j++)
	{
		std::cout << figuri[j] << '\n';
	}

	std::cout << "===========================================================\n\n";

	int index = 0;
	int grosimeMaxima = figuri[0]->getGrosimeLinie();

	for (int j = 1; j < nrFiguri; j++)
	{
		if (figuri[j]->getGrosimeLinie() > grosimeMaxima)
		{
			grosimeMaxima = figuri[j]->getGrosimeLinie();
			index = j;
		}
	}

	std::cout << "Figura geometrica cu cea mai mare grosime a liniei din vector este afisata mai jos\n\n" << figuri[index];

	for (int j = 0; j < nrFiguri; j++)
	{
		delete figuri[j];
	}

	delete[] figuri;

	return 0;
}