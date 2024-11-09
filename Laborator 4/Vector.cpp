#include "Vector.h"

Vector::Vector(const int dimensiune)
{
	if (dimensiune > 0)
	{
		this->dimensiune = dimensiune;
		this->elemente = new double[dimensiune] {0};
	}
	else
	{
		this->dimensiune = 0;
		this->elemente = nullptr;
	}
}

Vector::Vector(const Vector& vector)
{
	if (vector.dimensiune > 0 && vector.elemente != nullptr)
	{
		dimensiune = vector.dimensiune;
		elemente = new double[vector.dimensiune];

		for (int j = 0; j < vector.dimensiune; j++)
		{
			elemente[j] = vector.elemente[j];
		}
	}
	else
	{
		dimensiune = 0;
		elemente = nullptr;
	}
}

Vector& Vector::operator=(const Vector& vector)
{
	if (this == &vector)
	{
		return *this;
	}

	if (elemente != nullptr)
	{
		delete[] elemente;
	}

	if (vector.dimensiune > 0 && vector.elemente != nullptr)
	{
		dimensiune = vector.dimensiune;
		elemente = new double[vector.dimensiune];

		for (int j = 0; j < vector.dimensiune; j++)
		{
			elemente[j] = vector.elemente[j];
		}
	}
	else
	{
		dimensiune = 0;
		elemente = nullptr;
	}

	return *this;
}

Vector::~Vector()
{
	if (elemente != nullptr)
	{
		delete[] elemente;
	}
}

double& Vector::operator[](const int& index)
{
	if (index >= 0 && index < dimensiune)
	{
		return elemente[index];
	}
}

const double& Vector::operator[](const int& index) const
{
	if (index >= 0 && index < dimensiune)
	{
		return elemente[index];
	}
}

Vector& Vector::operator++()
{
	if (dimensiune <= 0 || elemente == nullptr)
	{
		*this = Vector();
		return *this;
	}

	for (int j = 0; j < dimensiune; j++)
	{
		elemente[j]++;
	}

	return *this;
}

Vector& Vector::operator--()
{
	if (dimensiune <= 0 || elemente == nullptr)
	{
		*this = Vector();
		return *this;
	}

	for (int j = 0; j < dimensiune; j++)
	{
		elemente[j]--;
	}

	return *this;
}

Vector Vector::operator++(int)
{
	if (dimensiune <= 0 || elemente == nullptr)
	{
		return Vector();
	}

	Vector copie = *this;

	for (int j = 0; j < dimensiune; j++)
	{
		elemente[j]++;
	}

	return copie;
}

Vector Vector::operator--(int)
{
	if (dimensiune <= 0 || elemente == nullptr)
	{
		return Vector();
	}

	Vector copie = *this;

	for (int j = 0; j < dimensiune; j++)
	{
		elemente[j]--;
	}

	return copie;
}

Vector* Vector::operator->()
{
	return this;
}

Vector Vector::operator^(const int& putere) const
{
	if (dimensiune <= 0 || !elemente)
	{
		return Vector();
	}

	Vector rezultat = *this;

	for (int j = 0; j < rezultat.dimensiune; j++)
	{
		rezultat.elemente[j] = pow(rezultat.elemente[j], putere);
	}

	return rezultat;
}

Vector Vector::operator+(const Vector& vector) const
{
	if (dimensiune <= 0 || !elemente || !vector.elemente || this->dimensiune != vector.dimensiune)
	{
		return Vector();
	}

	Vector rezultat = *this;

	for (int j = 0; j < dimensiune; j++)
	{
		rezultat.elemente[j] += vector.elemente[j];
	}

	return rezultat;
}

Vector Vector::operator-() const
{
	if (dimensiune <= 0 || !elemente)
	{
		return Vector();
	}

	Vector rezultat = *this;

	for (int j = 0; j < dimensiune; j++)
	{
		rezultat.elemente[j] = (-1) * rezultat.elemente[j];
	}

	return rezultat;
}

Vector Vector::operator-(const Vector& vector) const
{
	if (dimensiune <= 0 || !elemente || !vector.elemente || this->dimensiune != vector.dimensiune)
	{
		return Vector();
	}

	Vector rezultat = *this;

	for (int j = 0; j < dimensiune; j++)
	{
		rezultat.elemente[j] -= vector.elemente[j];
	}

	return rezultat;
}

double Vector::operator*(const Vector& vector) const
{
	if (this->dimensiune != vector.dimensiune)
	{
		return -9999999;
	}

	double rezultat = 0.0;

	for (int j = 0; j < dimensiune; j++)
	{
		rezultat += elemente[j] * vector.elemente[j];
	}

	return rezultat;
}

bool Vector::operator==(const Vector& vector) const
{
	if ((this->dimensiune != vector.dimensiune) || !this->elemente || !vector.elemente)
	{
		return false;
	}

	for (int j = 0; j < dimensiune; j++)
	{
		if (this->elemente[j] != vector.elemente[j])
		{
			return false;
		}
	}

	return true;
}

bool Vector::operator!=(const Vector& vector) const
{
	if ((this->dimensiune != vector.dimensiune) || !this->elemente || !vector.elemente)
	{
		return false;
	}

	for (int j = 0; j < dimensiune; j++)
	{
		if (this->elemente[j] == vector.elemente[j])
		{
			return false;
		}
	}

	return true;
}

bool Vector::operator<(const Vector& vector) const
{
	return this->getModul() < vector.getModul();
}

bool Vector::operator>(const Vector& vector) const
{
	return this->getModul() > vector.getModul();
}

bool Vector::operator<=(const Vector& vector) const
{
	return this->getModul() <= vector.getModul();
}

bool Vector::operator>=(const Vector& vector) const
{
	return this->getModul() >= vector.getModul();
}

const double Vector::getModul() const
{
	if (dimensiune == 0)
	{
		return 0.0;
	}

	double modul = 0.0;

	for (int j = 0; j < dimensiune; j++)
	{
		modul += pow(elemente[j], 2);
	}

	return sqrt(modul);
}

const int Vector::getDimensiune() const
{
	return dimensiune;
}

void Vector::adaugaElement(const double& element)
{
	if (elemente == nullptr)
	{
		elemente = new double[1];
		elemente[0] = element;
		dimensiune++;

		return;
	}

	double* copie = elemente;
	dimensiune++;

	elemente = new double[dimensiune];

	for (int j = 0; j < dimensiune - 1; j++)
	{
		elemente[j] = copie[j];
	}

	elemente[dimensiune - 1] = element;

	delete[] copie;
}

Vector operator*(const Vector& vector, const double& scalar)
{
	if (vector.dimensiune <= 0 || vector.elemente == nullptr)
	{
		return Vector();
	}

	Vector rezultat = vector;

	for (int j = 0; j < vector.dimensiune; j++)
	{
		rezultat.elemente[j] *= scalar;
	}

	return rezultat;
}

Vector operator*(const double& scalar, const Vector& vector)
{
	if (vector.dimensiune <= 0 || vector.elemente == nullptr)
	{
		return Vector();
	}

	Vector rezultat = vector;

	for (int j = 0; j < vector.dimensiune; j++)
	{
		rezultat.elemente[j] *= scalar;
	}

	return rezultat;
}

std::ostream& operator<<(std::ostream& out, const Vector& vector)
{
	out << "Dimensiunea vectorului este: " << vector.dimensiune << '\n';
	out << "Elementele vectorului sunt: ";

	if (vector.elemente == nullptr)
	{
		out << "N/A" << "\n\n";
	}
	else
	{
		for (int j = 0; j < vector.dimensiune; j++)
		{
			(j < vector.dimensiune - 1) ? out << vector.elemente[j] << ", " : out << vector.elemente[j] << "\n\n";
		}
	}

	return out;
}