#include "Vector.h"

int main()
{
	Vector v1;

	std::cout << v1;

	v1.adaugaElement(1);
	v1->adaugaElement(2);
	v1->adaugaElement(3);
	v1.adaugaElement(4);

	std::cout << -v1;
	std::cout << v1;
	std::cout << ++v1;
	std::cout << v1++;
	std::cout << v1;
	std::cout << (v1 ^ 2);

	Vector v2 = v1--;

	std::cout << v1 + v2;

	std::cout << 3 * v1;

	(v1 == v2) ? std::cout << "Vectorii sunt egali\n\n" : std::cout << "Vectorii nu sunt egali\n\n";

	std::cout << v1 - v2;
	std::cout << v1 * v2 << "\n\n";

	for (int j = 0; j < v1->getDimensiune(); j++)
	{
		std::cout << v1[j] << "\n";
	}

	return 0;
}