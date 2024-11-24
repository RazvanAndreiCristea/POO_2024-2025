#pragma once
#include "Utils.h"
#include <iostream>

class MijlocTransport
{
	char* culoare;
	char* producator;

public:

	MijlocTransport();
	MijlocTransport(const char* culoare, const char* producator);
	MijlocTransport(const MijlocTransport& mijlocTransport);
	MijlocTransport& operator=(const MijlocTransport& mijlocTransport);
	~MijlocTransport();

	friend std::ostream& operator<<(std::ostream& out, const MijlocTransport& mijlocTransport);
};