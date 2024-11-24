#include "LabHelper.h"

int main()
{
	Vagon v1[6]
	{
		Vagon("Argintiu", "Alstom", 50, true),
		Vagon("Visiniu", "Alstom", 45, true),
		Vagon("Auriu", "Alstom", 55, true),
		Vagon("Argintiu", "Alstom", 60, true),
		Vagon("Alb", "Alstom", 40, true),
		Vagon("Maro", "Alstom", 35, true)
	};

	Vagon v2[4]
	{
		Vagon("Argintiu", "Alstom", 50, true),
		Vagon("Visiniu", "Alstom", 45, false),
		Vagon("Auriu", "Alstom", 55, false),
		Vagon("Argintiu", "Alstom", 60, true),
	};

	Vagon v3[8]
	{
		Vagon("Argintiu", "Alstom", 50, true),
		Vagon("Visiniu", "Alstom", 45, true),
		Vagon("Auriu", "Alstom", 55, false),
		Vagon("Auriu", "Alstom", 75, false),
		Vagon("Auriu", "Alstom", 65, false),
		Vagon("Argintiu", "Alstom", 60, true),
		Vagon("Alb", "Alstom", 40, true),
		Vagon("Maro", "Alstom", 35, true)
	};

	Vagon v4[2]
	{
		Vagon("Argintiu", "Alstom", 50, true),
		Vagon("Visiniu", "Alstom", 45, false),
	};

	Metrou metrou("Rosu", "Astra Arad", 6, v1);

	std::cout << metrou << '\n';
	std::cout << "Numarul total de locuri din garnitura de metrou este: " << calculezaTotalLocuriMetrou(metrou) << '\n';

	int nrGarnituri = 4;
	Metrou* metrouri = new Metrou[nrGarnituri];

	metrouri[0] = Metrou("Alb", "CFR", 8, v3);
	metrouri[1] = Metrou("Alb", "Astra Arad", 2, v4);
	metrouri[2] = Metrou("Alb", "Alstom", 4, v2);
	metrouri[3] = Metrou("Alb", "CAF", 6, v1);

	afisareGarnituri(metrouri, nrGarnituri);

	std::cout << "=========================== Ordonare garnituri de metrou ============================\n\n\n";

	sortareMetrouri(metrouri, nrGarnituri);
	afisareGarnituri(metrouri, nrGarnituri);

	delete[] metrouri;

	return 0;
}