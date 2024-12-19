#include "Student.h"

int Student::contor = 1000;

Student::Student() : idStudent(contor++)
{
	varsta = 0;
	numeComplet = "N/A";
}

Student::Student(const std::string& numeComplet, const int& varsta, const std::vector<float>& note) : idStudent(contor++)
{
	this->note = note;
	this->varsta = varsta;
	this->numeComplet = numeComplet;
}

Student& Student::operator=(const Student& student)
{
	if (this == &student)
	{
		return *this;
	}

	this->note = student.note;
	this->varsta = student.varsta;
	this->numeComplet = student.numeComplet;

	return *this;
}

float Student::getMedieLaborator() const
{
	return std::accumulate(note.begin(), note.end(), 0.0f) / note.size();
}

bool Student::operator>(const Student& student) const
{
	return this->numeComplet > student.numeComplet;
}

std::ostream& operator<<(std::ostream& out, const Student& student)
{
	out << "Numarul matricol al studentului este: " << student.idStudent << '\n';
	out << "Numele complet al studentului este: " << student.numeComplet << '\n';
	out << "Varsta studentului este: " << student.varsta << " ani\n";
	out << "Notele studentului pe fiecare laborator sunt: ";

	for (int j = 0; j < student.note.size(); j++)
	{
		(j < student.note.size() - 1) ? std::cout << student.note.at(j) << ", " : std::cout << student.note.at(j);
	}

	out << '\n';

	return out;
}