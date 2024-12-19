#include "Curs.h"

int Curs::contor = 650;

Curs::Curs() : idCurs(contor++)
{
	nrOre = 0;
}

Curs::Curs(const std::string& denumire, const int& nrOre) : idCurs(contor++)
{
	this->nrOre = nrOre;
	this->denumire = denumire;
}

bool Curs::operator<(const Curs& curs) const
{
	return this->denumire < curs.denumire;
}

std::ostream& operator<<(std::ostream& out, const Curs& curs)
{
	out << "Id-ul cursului este: " << curs.idCurs << '\n';
	out << "Denumirea cursului este: " << curs.denumire << '\n';
	out << "Numarul de ore pentru desfasurarea cursului est: " << curs.nrOre << '\n';

	return out;
}