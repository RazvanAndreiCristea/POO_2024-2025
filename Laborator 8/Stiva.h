#pragma once
#include "Triunghi.h"
#include "NrComplex.h"

template <typename T>
class Stiva;

template <typename T>
class NodStiva
{
	T info;
	NodStiva* next;

public:

	friend class Stiva<T>;
	NodStiva(const T& info, NodStiva* next = nullptr);

	T getInfo() const;
	NodStiva<T>* getNext() const;
};

template<typename T>
std::ostream& operator<<(std::ostream& out, const Stiva<T>& stiva);

template <typename T>
class Stiva
{
	int size;
	NodStiva<T>* varf;

public:

	Stiva();
	~Stiva();

	T getVarf() const;
	int getSize() const;
	bool isEmpty() const;

	void pop();
	void push(const T& info);

	T* toVector() const;
	friend std::ostream& operator<< <>(std::ostream& out, const Stiva& stiva);
};