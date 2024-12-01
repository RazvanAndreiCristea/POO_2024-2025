#include "Student.h"
#include "Profesor.h"

int main()
{
	Persoana* student = new Student(21, "Popa Marcel", "Eletronica", true);
	std::cout << student << '\n';
	std::cout << "Venitul studentului este: " << student->getVenit() << " lei\n\n";

	Persoana* profesor = new Profesor(35, "Andreescu Mariana", "Fizica", false);
	std::cout << profesor << '\n';
	std::cout << "Venitul profesorului este: " << profesor->getVenit() << " lei\n";

	delete student;
	delete profesor;

	return 0;
}