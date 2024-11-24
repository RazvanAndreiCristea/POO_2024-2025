#include "Triunghi.h"

Triunghi::Triunghi(const float& baza, const float& inaltime)
{
	if (baza > 0.0f && inaltime > 0.0f)
	{
		this->baza = baza;
		this->inaltime = inaltime;
	}
	else
	{
		this->baza = 0.0f;
		this->inaltime = 0.0f;
	}
}

float Triunghi::getArie() const
{
	return baza * inaltime / 2;
}

bool Triunghi::operator<(const Triunghi& triunghi) const
{
	return this->getArie() < triunghi.getArie();
}

std::ostream& operator<<(std::ostream& out, const Triunghi& triunghi)
{
	out << "Valoarea bazei triunghiului este: " << triunghi.baza << '\n';
	out << "Valoarea inaltimii triunghiului este: " << triunghi.inaltime << '\n';
	out << "Valoarea ariei triunghiului este: " << triunghi.getArie() << '\n';

	return out;
}