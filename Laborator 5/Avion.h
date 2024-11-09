#pragma once
#include <string>
#include <iostream>
#pragma warning (disable : 4996)

class Avion
{
protected:

	char* tipAeronava;
	float capacitateRezervor;

public:

	Avion();
	Avion(const char* tipAeronava, const float& capacitateRezervor);
	Avion(const Avion& avion);
	Avion& operator=(const Avion& avion);
	~Avion();

	char* getTipAeronava() const;
	float getCapacitateRezervor() const;

	void setTipAeronava(const char* tipAeronava);
	void setCapacitateRezervor(const float& capacitateRezervor);

	friend std::ostream& operator<<(std::ostream& out, const Avion& avion);
};

char* copiazaString(const char* const& sursa);