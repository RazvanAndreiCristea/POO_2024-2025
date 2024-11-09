#include "Clasa.h"

Clasa::Clasa()
{
	nrStudenti = 0;
	studenti = nullptr;
	numeClasa = nullptr;
}

Clasa::Clasa(const int& nrStudenti, const char* numeClasa, const Diriginte& diriginte, const Student* const& studenti)
{
	this->diriginte = diriginte;
	this->numeClasa = copiazaString(numeClasa);

	if (nrStudenti > 0 && studenti != nullptr)
	{
		this->nrStudenti = nrStudenti;
		this->studenti = new Student[nrStudenti];

		for (int j = 0; j < nrStudenti; j++)
		{
			this->studenti[j] = studenti[j];
		}
	}
	else
	{
		this->nrStudenti = 0;
		this->studenti = nullptr;
	}
}

Clasa::Clasa(const Clasa& clasa)
{
	diriginte = clasa.diriginte;
	numeClasa = copiazaString(clasa.numeClasa);

	if (clasa.nrStudenti > 0 && clasa.studenti != nullptr)
	{
		nrStudenti = clasa.nrStudenti;
		studenti = new Student[clasa.nrStudenti];

		for (int j = 0; j < clasa.nrStudenti; j++)
		{
			studenti[j] = clasa.studenti[j];
		}
	}
	else
	{
		nrStudenti = 0;
		studenti = nullptr;
	}
}

Clasa& Clasa::operator=(const Clasa& clasa)
{
	if (this == &clasa)
	{
		return *this;
	}

	if (studenti != nullptr)
	{
		delete[] studenti;
	}

	diriginte = clasa.diriginte;
	numeClasa = copiazaString(clasa.numeClasa);

	if (clasa.nrStudenti > 0 && clasa.studenti != nullptr)
	{
		nrStudenti = clasa.nrStudenti;
		studenti = new Student[clasa.nrStudenti];

		for (int j = 0; j < clasa.nrStudenti; j++)
		{
			studenti[j] = clasa.studenti[j];
		}
	}
	else
	{
		nrStudenti = 0;
		studenti = nullptr;
	}

	return *this;
}

Clasa::~Clasa()
{
	if (studenti != nullptr)
	{
		delete[] studenti;
	}
}

bool Clasa::operator>(const Clasa& clasa) const
{
	return strcmp(numeClasa, clasa.numeClasa) > 0;
}

std::ostream& operator<<(std::ostream& out, const Clasa& clasa)
{
	out << "Denumirea clasei este: " << clasa.numeClasa << '\n';
	out << "Numarul de studenti din clasa este: " << clasa.nrStudenti << '\n';

	out << "\nDetalii despre dirigintele clasei\n\n";
	out << clasa.diriginte << '\n';

	out << "Detalii despre studentii din clasa";

	if (clasa.studenti == nullptr)
	{
		out << ": NaN\n";
	}
	else
	{
		out << "\n\n";

		for (int j = 0; j < clasa.nrStudenti; j++)
		{
			out << clasa.studenti[j] << '\n';
		}
	}

	return out;
}