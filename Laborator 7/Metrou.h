#pragma once
#include "MijlocTransport.h"
#include "Vagon.h"

class Metrou : public MijlocTransport
{
	int nrVagoane;
	Vagon* vagoane;

public:

	Metrou();
	Metrou(const char* culoare, const char* producator, const int& nrVagoane, Vagon* vagoane);
	Metrou(const Metrou& metrou);
	Metrou& operator=(const Metrou& metrou);
	~Metrou();

	int getNrVagoane() const;
	Vagon* getVagoane() const;

	bool operator>(const Metrou& metrou) const;

	friend std::ostream& operator<<(std::ostream& out, const Metrou& metrou);
};