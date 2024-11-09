#include "Sifonier.h"

Sifonier::Sifonier()
{
	pret = 0.0f;
	numarSertare = 0;
	culoare = nullptr;
	producator = nullptr;
}

Sifonier::Sifonier(const float& pret, const char* culoare, const char* producator, const int& numarSertare)
{
	this->pret = pret;
	this->numarSertare = numarSertare;
	this->culoare = copiazaString(culoare);
	this->producator = copiazaString(producator);
}

Sifonier::Sifonier(const Sifonier& sifonier)
{
	pret = sifonier.pret;
	numarSertare = sifonier.numarSertare;
	culoare = copiazaString(sifonier.culoare);
	producator = copiazaString(sifonier.producator);
}

Sifonier& Sifonier::operator=(const Sifonier& sifonier)
{
	if (this == &sifonier)
	{
		return *this;
	}

	if (culoare != nullptr)
	{
		delete[] culoare;
	}

	if (producator != nullptr)
	{
		delete[] producator;
	}

	pret = sifonier.pret;
	numarSertare = sifonier.numarSertare;
	culoare = copiazaString(sifonier.culoare);
	producator = copiazaString(sifonier.producator);

	return *this;
}

Sifonier::~Sifonier()
{
	if (culoare != nullptr)
	{
		delete[] culoare;
	}

	if (producator != nullptr)
	{
		delete[] producator;
	}
}

float Sifonier::getPret() const
{
	return pret;
}

char* Sifonier::getCuloare() const
{
	return culoare;
}

char* Sifonier::getProducator() const
{
	return producator;
}

int Sifonier::numarSertatre() const
{
	return numarSertare;
}

void Sifonier::setPret(const float& pret)
{
	if (pret <= 0.0f)
	{
		return;
	}

	this->pret = pret;
}

void Sifonier::setCuloare(const char* culoare)
{
	if (culoare == nullptr)
	{
		return;
	}

	if (this->culoare != nullptr)
	{
		delete[] this->culoare;
	}

	this->culoare = copiazaString(culoare);
}

void Sifonier::setProducator(const char* producator)
{
	if (producator == nullptr)
	{
		return;
	}

	if (this->producator != nullptr)
	{
		delete[] this->producator;
	}

	this->producator = copiazaString(producator);
}

void Sifonier::setNumarSertare(const int& numarSertare)
{
	if (numarSertare <= 0)
	{
		return;
	}

	this->numarSertare = numarSertare;
}

void Sifonier::afisare() const
{
	std::cout << "Pretul sifonierului este: " << pret << " ron\n";
	std::cout << "Numarul de sertare din sifonier este: " << numarSertare << '\n';

	std::cout << "Culoarea sifonierului este: ";

	if (culoare != nullptr)
	{
		std::cout << culoare << '\n';
	}
	else
	{
		std::cout << "N/A\n";
	}

	std::cout << "Producatorul sifonierului este: ";

	if (producator != nullptr)
	{
		std::cout << producator << '\n';
	}
	else
	{
		std::cout << "N/A\n";
	}
}

char* copiazaString(const char* const& sursa)
{
	if (sursa == nullptr)
	{
		return nullptr;
	}

	char* destinatie = new char[strlen(sursa) + 1];
	strcpy(destinatie, sursa);

	return destinatie;
}