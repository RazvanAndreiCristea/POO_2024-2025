#pragma once
#include <string>
#include <iostream>

class Curs
{
	int nrOre;
	std::string denumire;

	const int idCurs;
	static int contor;

public:

	Curs();
	Curs(const std::string& denumire, const int& nrOre);

	bool operator<(const Curs& curs) const;
	friend std::ostream& operator<<(std::ostream& out, const Curs& curs);
};