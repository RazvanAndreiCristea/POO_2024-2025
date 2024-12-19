#pragma once
#include <string>
#include <vector>
#include <numeric>
#include <iostream>

class Student
{
	int varsta;
	std::string numeComplet;
	std::vector<float> note;

	static int contor;
	const int idStudent;

public:

	Student();
	Student(const std::string& numeComplet, const int& varsta, const std::vector<float>& note);
	Student& operator=(const Student& student);

	float getMedieLaborator() const;

	bool operator>(const Student& student) const;
	friend std::ostream& operator<<(std::ostream& out, const Student& student);
};