#pragma once
#include "Metrou.h"

void interschimbare(Metrou& m1, Metrou& m2);

void sortareMetrouri(Metrou*& metrouri, const int& dimensiune);

int calculezaTotalLocuriMetrou(const Metrou& metrou);

void afisareGarnituri(const Metrou* const& metrouri, const int& nrGarnituri);