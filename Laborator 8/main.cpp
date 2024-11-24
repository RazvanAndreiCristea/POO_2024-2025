#include "Stiva.h"
#include "SortingHelper.h"

int main()
{
	Stiva<int> s1;

	s1.push(2);
	s1.push(3);
	s1.push(-1);
	s1.push(8);

	std::cout << s1 << '\n';

	int d1 = s1.getSize();
	int* intregi = s1.toVector();

	for (int j = 0; j < d1; j++)
	{
		std::cout << intregi[j] << ' ';
	}

	s1.pop();
	std::cout << '\n' << s1 << '\n';

	Stiva<Triunghi> s2;

	s2.push(Triunghi(4.0f, 3.5f));
	s2.push(Triunghi(2.5f, 4.25f));
	s2.push(Triunghi(1.5f, 6.7f));
	s2.push(Triunghi(5.0f, 5.0f));

	std::cout << s2 << '\n';

	int d2 = s2.getSize();
	Triunghi* triunghiuri = s2.toVector();

	for (int j = 0; j < d2; j++)
	{
		std::cout << triunghiuri[j] << '\n';
	}

	s2.pop();
	std::cout << '\n' << s2 << '\n';

	Stiva<NrComplex> s3;

	s3.push(NrComplex(-4.0f, 3.5f));
	s3.push(NrComplex(2.5f, -4.25f));
	s3.push(NrComplex(1.5f, 6.7f));
	s3.push(NrComplex(-5.0f, -1.2f));

	std::cout << s3 << '\n';

	int d3 = s3.getSize();
	NrComplex* numereComplexe = s3.toVector();

	for (int j = 0; j < d3; j++)
	{
		std::cout << numereComplexe[j] << '\n';
	}

	s3.pop();
	std::cout << '\n' << s3 << '\n';

	std::cout << "=====================================================\n";

	sortare(intregi, d1);
	sortare(triunghiuri, d2);
	sortare(numereComplexe, d3);

	for (int j = 0; j < d1; j++)
	{
		std::cout << intregi[j] << ' ';
	}

	std::cout << "\n\n";

	for (int j = 0; j < d2; j++)
	{
		std::cout << triunghiuri[j] << '\n';
	}

	std::cout << '\n';

	for (int j = 0; j < d3; j++)
	{
		std::cout << numereComplexe[j] << '\n';
	}

	delete[] intregi;
	delete[] triunghiuri;
	delete[] numereComplexe;

	return 0;
}