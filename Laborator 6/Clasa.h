#pragma once
#include "Student.h"
#include "Diriginte.h"

class Clasa
{
	int nrStudenti;
	char* numeClasa;
	Diriginte diriginte;
	Student* studenti;

public:

	Clasa();
	Clasa(const int& nrStudenti, const char* numeClasa, const Diriginte& diriginte, const Student* const& studenti);
	Clasa(const Clasa& clasa);
	Clasa& operator=(const Clasa& clasa);
	~Clasa();

	bool operator>(const Clasa& clasa) const;
	friend std::ostream& operator<<(std::ostream& out, const Clasa& clasa);
};