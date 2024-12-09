#include "StringHelper.h"

char* copiazaString(const char* const& sursa)
{
    return (sursa != nullptr) ? strcpy(new char[strlen(sursa) + 1], sursa) : nullptr;
}