#pragma once
#include "Persoana.h"

class Student : public Persoana
{
	float medieAnuala;

public:

	Student();
	Student(const char* nume, const float& medieAnuala);
	Student(const Student& student);
	Student& operator=(const Student& student);
	~Student();

	friend std::ostream& operator<<(std::ostream& out, const Student& student);
};