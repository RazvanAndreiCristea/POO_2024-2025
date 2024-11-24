#include "Vagon.h"

Vagon::Vagon() : MijlocTransport()
{
	nrLocuri = 0;
	esteAclimatizat = false;
}

Vagon::Vagon(const char* culoare, const char* producator, const int& nrLocuri, const bool& esteAclimatizat)
	: MijlocTransport(culoare, producator)
{
	this->nrLocuri = nrLocuri;
	this->esteAclimatizat = esteAclimatizat;
}

Vagon::Vagon(const Vagon& vagon) : MijlocTransport(vagon)
{
	nrLocuri = vagon.nrLocuri;
	esteAclimatizat = vagon.esteAclimatizat;
}

Vagon& Vagon::operator=(const Vagon& vagon)
{
	if (this == &vagon)
	{
		return *this;
	}

	MijlocTransport::operator=(vagon);

	nrLocuri = vagon.nrLocuri;
	esteAclimatizat = vagon.esteAclimatizat;

	return *this;
}

Vagon::~Vagon()
{

}

int Vagon::getNrLocuri() const
{
	return nrLocuri;
}

std::ostream& operator<<(std::ostream& out, const Vagon& vagon)
{
	out << (MijlocTransport&)vagon;

	out << "Numarul de locuri din vagon este: " << vagon.nrLocuri << '\n';
	out << "Vagonul este aclimatizat? -> ";
	vagon.esteAclimatizat ? out <<"DA\n" : out << "NU\n";

	return out;
}