#pragma once
#include <cmath>
#include <iostream>

class NrComplex
{
	float real;
	float imaginar;

public:

	NrComplex(const float& real = 0.0f, const float& imaginar = 0.0f);

	float getModul() const;
	bool operator<(const NrComplex& z) const;

	friend std::ostream& operator<<(std::ostream& out, const NrComplex& z);
};