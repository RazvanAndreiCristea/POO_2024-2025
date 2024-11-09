#pragma once
#include "Avion.h"

class AvionMilitar : public Avion
{
	char* numePilot;
	int vitezaMaxima;

public:

	AvionMilitar();
	AvionMilitar(const char* tipAeronava, const float& capacitateRezervor,
		const char* numePilot, const int& vitezaMaxima);
	AvionMilitar(const AvionMilitar& avionMilitar);
	AvionMilitar& operator=(const AvionMilitar& avionMilitar);
	~AvionMilitar();

	char* getNumePilot() const;
	int getVitezaMaxima() const;

	void setNumePilot(const char* numePilot);
	void setVitezaMaxima(const int& vitezaMaxima);

	friend std::ostream& operator<<(std::ostream& out, const AvionMilitar& avionMilitar);
};