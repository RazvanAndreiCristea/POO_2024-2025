#include "Student.h"

Student::Student() : Persoana()
{
	medieAnuala = 0.0f;
}

Student::Student(const char* nume, const float& medieAnuala) : Persoana(nume)
{
	this->medieAnuala = medieAnuala;
}

Student::Student(const Student& student) : Persoana(student) 
{
	medieAnuala = student.medieAnuala; 
}

Student& Student::operator=(const Student& student)
{
	if (this == &student)
	{
		return *this;
	}

	Persoana::operator=(student);

	medieAnuala = student.medieAnuala;

	return *this;
}

Student::~Student()
{

}

std::ostream& operator<<(std::ostream& out, const Student& student)
{
	operator<<(out, (Persoana&)student);

	out << "Media anuala a studentului este: " << student.medieAnuala << '\n';

	return out;
}