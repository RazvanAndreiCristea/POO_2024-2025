#pragma once
#include "Utils.h"
#include <iostream>

class Profesor
{
	float salariu;
	char* disciplinaPredata;

public:

	Profesor();
	Profesor(const float& salariu, const char* disciplinaPredata);
	Profesor(const Profesor& profesor);
	Profesor& operator=(const Profesor& profesor);
	~Profesor();

	float getSalariu() const;

	friend std::ostream& operator<<(std::ostream& out, const Profesor& profesor);
};