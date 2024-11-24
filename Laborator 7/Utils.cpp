#pragma once
#include "Utils.h"

char* copiazaString(const char* const& sursa)
{
	if (sursa == nullptr)
	{
		return nullptr;
	}

	char* destinatie = new char[strlen(sursa) + 1];
	strcpy(destinatie, sursa);

	return destinatie;
}