#pragma once
#include "Utils.h"
#include <iostream>

class Persoana
{
	char* nume;

public:

	Persoana();
	Persoana(const char* nume);
	Persoana(const Persoana& persoana);
	Persoana& operator=(const Persoana& persoana);
	~Persoana();

	friend std::ostream& operator<<(std::ostream& out, const Persoana& persoana);
};