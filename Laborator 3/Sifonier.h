#pragma once
#include <string>
#include <iostream>
#pragma warning (disable : 4996)

class Sifonier
{
	float pret;
	char* culoare;
	char* producator;
	int numarSertare;

public:

	Sifonier();
	Sifonier(const float& pret, const char* culoare, const char* producator, const int& numarSertare);
	Sifonier(const Sifonier& sifonier);
	Sifonier& operator=(const Sifonier& sifonier);
	~Sifonier();

	float getPret() const;
	char* getCuloare() const;
	char* getProducator() const;
	int numarSertatre() const;

	void setPret(const float& pret);
	void setCuloare(const char* culoare);
	void setProducator(const char* producator);
	void setNumarSertare(const int& numarSertare);

	void afisare() const;
};

char* copiazaString(const char* const& sursa);