#include "Stiva.h"

template<typename T>
NodStiva<T>::NodStiva(const T& info, NodStiva<T>* next)
{
	this->info = info;
	this->next = next;
}

template<typename T>
T NodStiva<T>::getInfo() const
{
	return info;
}

template<typename T>
NodStiva<T>* NodStiva<T>::getNext() const
{
	return next;
}

template<typename T>
Stiva<T>::Stiva()
{
	size = 0;
	varf = nullptr;
}

template<typename T>
Stiva<T>::~Stiva()
{
	while (varf != nullptr)
	{
		NodStiva<T>* aux = varf;
		varf = varf->next;
		delete aux;
		size--;
	}
}

template<typename T>
T Stiva<T>::getVarf() const
{
	return varf->info;
}

template<typename T>
int Stiva<T>::getSize() const
{
	return size;
}

template<typename T>
bool Stiva<T>::isEmpty() const
{
	return varf == nullptr;
}

template<typename T>
void Stiva<T>::pop()
{
	if (isEmpty())
	{
		return;
	}

	NodStiva<T>* aux = varf;
	varf = varf->next;
	delete aux;
	size--;
}

template<typename T>
void Stiva<T>::push(const T& info)
{
	if (isEmpty())
	{
		varf = new NodStiva<T>(info);
		size++;
		return;
	}

	NodStiva<T>* noulNod = new NodStiva<T>(info, varf);
	varf = noulNod;
	size++;
}

template<typename T>
T* Stiva<T>::toVector() const
{
	if (isEmpty())
	{
		return nullptr;
	}

	int index = 0;
	T* rezultat = new T[size];
	NodStiva<T>* current = varf;

	while (current != nullptr && index < size)
	{
		rezultat[index++] = current->info;
		current = current->next;
	}

	return rezultat;
}

template<typename T>
std::ostream& operator<<(std::ostream& out, const Stiva<T>& stiva)
{
	if (stiva.isEmpty())
	{
		out << "Stiva este goala\n\n";
		return out;
	}

	out << "Dimensiune stivei este: " << stiva.size << '\n';
	out << "Elementele stivei sunt afisate mai jos.\n\n";

	NodStiva<T>* curent = stiva.varf;

	while (curent != nullptr)
	{
		out << curent->getInfo() << '\n';
		curent = curent->getNext();
	}

	return out;
}

void testareStiva()
{
	Stiva<int> s1;

	s1.push(2);
	s1.push(3);
	s1.push(-1);
	s1.push(8);

	std::cout << s1 << '\n';

	s1.pop();

	std::cout << s1.getSize() << '\n';
	std::cout << s1.getVarf() << '\n';

	int* intregi = s1.toVector();

	Stiva<Triunghi> s2;

	s2.push(Triunghi(4.0f, 3.5f));
	s2.push(Triunghi(2.5f, 4.25f));
	s2.push(Triunghi(1.5f, 6.7f));
	s2.push(Triunghi(5.0f, 5.0f));

	std::cout << s2 << '\n';

	s2.pop();

	Triunghi* triunghiuri = s2.toVector();
	int d2 = s2.getSize();

	std::cout << s2.getVarf() << '\n';

	Stiva<NrComplex> s3;

	s3.push(NrComplex(4.0f, 3.5f));
	s3.push(NrComplex(2.5f, 4.25f));
	s3.push(NrComplex(1.5f, 6.7f));
	s3.push(NrComplex(5.0f, 5.0f));

	std::cout << s3 << '\n';

	s3.pop();

	NrComplex* numereComplexe = s3.toVector();
	int d3 = s3.getSize();

	std::cout << s3.getVarf() << '\n';

	delete[] intregi;
	delete[] triunghiuri;
	delete[] numereComplexe;
}