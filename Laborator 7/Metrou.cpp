#include "Metrou.h"

Metrou::Metrou() : MijlocTransport()
{
	nrVagoane = 0;
	vagoane = nullptr;
}

Metrou::Metrou(const char* culoare, const char* producator, const int& nrVagoane, Vagon* vagoane) : MijlocTransport(culoare, producator)
{
	this->nrVagoane = nrVagoane;

	if (vagoane != nullptr)
	{
		this->vagoane = new Vagon[nrVagoane];

		for (int j = 0; j < nrVagoane; j++)
		{
			this->vagoane[j] = vagoane[j];
		}
	}
	else
	{
		this->vagoane = nullptr;
	}
}

Metrou::Metrou(const Metrou& metrou) : MijlocTransport(metrou)
{
	nrVagoane = metrou.nrVagoane;

	if (metrou.vagoane != nullptr)
	{
		vagoane = new Vagon[metrou.nrVagoane];

		for (int j = 0; j < metrou.nrVagoane; j++)
		{
			vagoane[j] = metrou.vagoane[j];
		}
	}
	else
	{
		vagoane = nullptr;
	}
}

Metrou& Metrou::operator=(const Metrou& metrou)
{
	if (this == &metrou)
	{
		return *this;
	}

	MijlocTransport::operator=(metrou);

	if (vagoane != nullptr)
	{
		delete[] vagoane;
	}

	nrVagoane = metrou.nrVagoane;

	if (metrou.vagoane != nullptr)
	{
		vagoane = new Vagon[metrou.nrVagoane];

		for (int j = 0; j < metrou.nrVagoane; j++)
		{
			vagoane[j] = metrou.vagoane[j];
		}
	}
	else
	{
		vagoane = nullptr;
	}

	return *this;
}

Metrou::~Metrou()
{
	if (vagoane != nullptr)
	{
		delete[] vagoane;
	}
}

int Metrou::getNrVagoane() const
{
	return nrVagoane;
}

Vagon* Metrou::getVagoane() const
{
	return vagoane;
}

bool Metrou::operator>(const Metrou& metrou) const
{
	return this->nrVagoane > metrou.nrVagoane;
}

std::ostream& operator<<(std::ostream& out, const Metrou& metrou)
{
	out << (MijlocTransport&)metrou;

	out << "Numarul de vagoane al metroului este: " << metrou.nrVagoane << '\n';
	out << "Detalii despre vagoanele metroului\n\n";

	for (int j = 0; j < metrou.nrVagoane; j++)
	{
		out << metrou.vagoane[j] << '\n';
	}

	return out;
}