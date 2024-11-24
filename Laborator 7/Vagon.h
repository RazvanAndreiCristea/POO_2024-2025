#pragma once
#include "MijlocTransport.h"

class Vagon : public MijlocTransport
{
	int nrLocuri;
	bool esteAclimatizat;

public:
	
	Vagon();
	Vagon(const char* culoare, const char* producator, const int& nrLocuri, const bool& esteAclimatizat);
	Vagon(const Vagon& vagon);
	Vagon& operator=(const Vagon& vagon);
	~Vagon();

	int getNrLocuri() const;

	friend std::ostream& operator<<(std::ostream& out, const Vagon& vagon);
};