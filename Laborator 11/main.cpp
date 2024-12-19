#include "Curs.h"
#include "Student.h"

#include <map>
#include <list>
#include <algorithm>

int main()
{
	std::list<Student> l1, l2, l3, l4, l5;

	l1.push_back(Student("Andronie Mihai", 21, { 10, 10, 10, 9.5f, 8, 8.5f, 9, 10 }));
	l1.push_back(Student("Vasilescu Anca", 19, { 10, 10, 9, 9.5f, 8.5f, 8.5f, 9, 10 }));
	l1.push_front(Student("Gheorghe Marian", 22, { 9.5f, 8, 10, 9.5f, 7, 8.5f, 9, 10 }));
	l1.push_back(Student("Popov Andreea", 23, { 10, 10, 10, 9.5f, 9, 8.5f, 9, 10 }));
	l1.push_back(Student("Baicu Cosmin", 22, { 7,8,7.5,9.5,9,8.5,9,10 }));

	l2.push_back(Student("Borangiu Andrei", 21, { 10, 10, 10, 9.5f, 8, 8.5f, 9, 10 }));
	l2.push_front(Student("Nitulescu Georgiana", 19, { 10, 10, 10, 9.5f, 8, 8.5f, 9, 10 }));
	l2.push_front(Student("Antonescu Cristina", 23, { 10, 10, 10, 9.5f, 9, 8.5f, 9, 10 }));
	l2.push_back(Student("Zamfiroiu Constantin", 22, { 7, 8, 7.5f, 9.5f, 9, 8.5f, 9, 10 }));

	l3.push_back(Student("Ionescu Maria", 20, { 9, 9.5f, 8, 7.5f, 8.5f, 9, 10, 9.5f }));
	l3.push_front(Student("Barbu Andrei", 22, { 7, 8, 6.5f, 8, 9.5f, 9, 10, 8.5f }));
	l3.push_back(Student("Georgescu Elena", 21, { 10, 10, 9.5f, 10, 9, 9.5f, 8.5f, 10 }));
	l3.push_front(Student("Dumitrescu Radu", 23, { 6, 7.5f, 8, 9, 8.5f, 9, 7.5f, 8 }));
	l3.push_back(Student("Stancu Valentina", 20, { 9.5f, 9, 10, 10, 9.5f, 8, 9, 10 }));
	l3.push_back(Student("Petrescu Daniel", 24, { 8, 8.5f, 9, 7.5f, 6.5f, 8, 8, 9.5f }));

	l4.push_back(Student("Lungu Ioana", 19, { 10, 9, 9.5f, 10, 8.5f, 9, 9, 9.5f }));
	l4.push_back(Student("Matei Cristian", 22, { 7, 7.5f, 8.5f, 8, 8, 7, 6.5f, 8.5f }));
	l4.push_front(Student("Dobre Anca", 21, { 9.5f, 10, 9, 9.5f, 10, 9.5f, 9, 9.5f }));
	l4.push_back(Student("Alexe Mihai", 23, { 6.5f, 7, 7.5f, 8, 8.5f, 7, 7, 7.5f }));
	l4.push_front(Student("Dragomir Teodora", 20, { 8, 8.5f, 8, 9, 9, 8.5f, 8, 8.5f }));
	l4.push_back(Student("Iacob Alin", 22, { 9, 9.5f, 10, 10, 9, 9.5f, 10, 9.5f }));
	l4.push_back(Student("Rusu Roxana", 21, { 7.5f, 8, 8.5f, 9, 9.5f, 8.5f, 8, 8.5f }));

	l5.push_back(Student("Marin Adrian", 20, { 10, 10, 10, 9.5f, 8, 8.5f, 9, 10 }));
	l5.push_back(Student("Ciobanu Ana", 19, { 9, 9.5f, 10, 9, 8.5f, 9, 9, 9.5f }));
	l5.push_front(Student("Popescu Raluca", 22, { 6.5f, 7.5f, 8, 7, 8, 7.5f, 7, 8.5f }));
	l5.push_back(Student("Tudorache Sorin", 21, { 8.5f, 9, 9.5f, 10, 9.5f, 9, 8.5f, 9.5f }));
	l5.push_front(Student("Manolache Bianca", 23, { 10, 10, 10, 9.5f, 9, 9.5f, 10, 10 }));
	l5.push_back(Student("Vinte Claudiu", 22, { 8, 8.5f, 9, 8.5f, 8, 7.5f, 8, 8.5f }));
	l5.push_back(Student("Cristea Diana", 21, { 9, 8.5f, 9.5f, 9, 8, 9, 9.5f, 9.5f }));
	l5.push_back(Student("Olaru Aurel", 22, { 9.5f, 7.5f, 8, 6, 8, 9, 9.5f, 10 }));

	std::map<Curs, std::list<Student>> mapa;

	mapa.insert(std::make_pair(Curs("IRA", 140), l5));
	mapa.insert(std::make_pair(Curs("POO", 160), l1));
	mapa.insert(std::make_pair(Curs("PCLP", 150), l3));
	mapa.insert(std::make_pair(Curs("TAIS", 120), l4));
	mapa.insert(std::make_pair(Curs("MN", 145), l2));

	l1.clear();
	l2.clear();
	l3.clear();
	l4.clear();
	l5.clear();

	for (const std::pair<const Curs, std::list<Student>>& pair : mapa)
	{
		std::cout << pair.first << '\n';

		for (const Student& student : pair.second)
		{
			std::cout << student << '\n';
		}
	}

	std::cout << "===============================================================\n\n";

	std::map<Curs, std::list<Student>>::const_iterator cursMinim = std::min_element(mapa.begin(), mapa.end(),
		[](const std::pair<Curs, std::list<Student>>& p1, const std::pair<Curs, std::list<Student>>& p2)
		{
			return p1.second.size() < p2.second.size();
		});

	if (cursMinim != mapa.end())
	{
		std::cout << "Cursul cu cel mai mic numar de cursanti este afisat mai jos\n";
		std::cout << cursMinim->first << '\n';
		std::cout << "Numar de cursanti: " << cursMinim->second.size() << "\n\n";
	}

	for (std::pair<const Curs, std::list<Student>>& pair : mapa)
	{
		pair.second.sort(
			[](const Student& s1, const Student& s2)
			{
				return s1 > s2;
			});
	}

	std::cout << "================================ Dupa sortare listelor de studenti ================================\n\n";

	for (const std::pair<const Curs, std::list<Student>>& pair : mapa)
	{
		std::cout << pair.first << '\n';

		for (const Student& student : pair.second)
		{
			std::cout << student << '\n';
		}
	}

	std::vector<Student> studentiTop;

	for (const std::pair<Curs, std::list<Student>>& pair : mapa)
	{
		const std::list<Student>& studenti = pair.second;

		std::list<Student>::const_iterator studentEminent = std::max_element(studenti.begin(), studenti.end(),
			[](const Student& s1, const Student& s2)
			{
				return s1.getMedieLaborator() < s2.getMedieLaborator();
			});

		if (studentEminent != studenti.end())
		{
			studentiTop.push_back(*studentEminent);
		}
	}

	mapa.clear();

	std::cout << "Studentii cu cele mai mari medii pe laborator de la fiecare curs sunt afisati mai jos\n\n";

	for (const Student& student : studentiTop)
	{
		std::cout << student << '\n';
	}

	std::sort(studentiTop.begin(), studentiTop.end(),
		[](const Student& s1, const Student& s2)
		{
			return s1.getMedieLaborator() > s2.getMedieLaborator();
		});

	std::cout << "================================ Dupa sortarea vectorului ================================\n\n";

	for (const Student& student : studentiTop)
	{
		std::cout << student << '\n';
	}

	studentiTop.clear();

	return 0;
}