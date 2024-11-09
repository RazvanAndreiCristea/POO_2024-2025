#pragma once
#include <cmath>
#include <iostream>

class Vector
{
	int dimensiune;
	double* elemente;

public:

	Vector(const int dimensiune = 0);
	Vector(const Vector& vector);
	Vector& operator=(const Vector& vector);
	~Vector();

	// operatorul de indexare

	double& operator[](const int& index);
	const double& operator[](const int& index) const;

	// operatorii de incrementare si decrementare formele pre si post fixare

	Vector& operator++();
	Vector& operator--();

	Vector operator++(int);
	Vector operator--(int);

	// operatorul sageata si operatorul caciula

	Vector* operator->();
	Vector operator^(const int& putere) const;

	// operatorul de adunare a doi vectori

	Vector operator+(const Vector& vector) const;

	// operatorul - pentru opusul unui vector si operatorul de scadere a doi vectori

	Vector operator-() const;
	Vector operator-(const Vector& vector) const;

	// operator pentru inmultirea a doi vectori cu aceeasi dimensiune

	double operator*(const Vector& vector) const;

	// operatorii de comparatie intre doi vectori

	bool operator==(const Vector& vector) const;
	bool operator!=(const Vector& vector) const;

	bool operator<(const Vector& vector) const;
	bool operator>(const Vector& vector) const;
	bool operator<=(const Vector& vector) const;
	bool operator>=(const Vector& vector) const;

	const double getModul() const; 
	const int getDimensiune() const;

	void adaugaElement(const double& element);

	// operatorii de inmultire a unui vector cu scalari

	friend Vector operator*(const Vector& vector, const double& scalar);
	friend Vector operator*(const double& scalar, const Vector& vector);

	// operatorul de afisare a unui vector

	friend std::ostream& operator<<(std::ostream& out, const Vector& vector);
};