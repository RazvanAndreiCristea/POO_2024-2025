#pragma once
#include <iostream>
#include "StringHelper.h"

enum TipFigura { kCERC, kDREPTUNGHI, kHEXAGON, kPATRAT };

class FiguraGeometrica
{
protected:

	virtual void afisare(std::ostream& out) const = 0;

public:

	virtual ~FiguraGeometrica() = 0;

	virtual char* getCuloare() const = 0;
	virtual int getGrosimeLinie() const = 0;
	virtual TipFigura getTipFigura() const = 0;

	bool operator<(const FiguraGeometrica& f2) const;

	friend std::ostream& operator<<(std::ostream& out, const FiguraGeometrica& figuraGeometrica);
	friend std::ostream& operator<<(std::ostream& out, const FiguraGeometrica* const& figuraGeometrica);
};