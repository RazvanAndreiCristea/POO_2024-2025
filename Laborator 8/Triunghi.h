#pragma once
#include <cmath>
#include <iostream>

class Triunghi
{
	float baza;
	float inaltime;

public:

	Triunghi(const float& baza = 0.0f, const float& inaltime = 0.0f);

	float getArie() const;
	bool operator<(const Triunghi& triunghi) const;

	friend std::ostream& operator<<(std::ostream& out, const Triunghi& triunghi);
};