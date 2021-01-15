#pragma once

#include "zad1.hpp"

#include <cctype>

// tutaj klasy PopGwiazda, RapGwiazda oraz funkcja stworzArtyste
class PopGwiazda : public Artysta
{
public:
    PopGwiazda(const std::string& p, unsigned ls) : Artysta(p, ls) {}
    void graj(std::ostream& stream) const override {stream << "PopGwiazda: " << getPseudonim();}
};

class RapGwiazda : public Artysta
{
public:
    RapGwiazda(const std::string& p, unsigned ls) : Artysta(p, ls) {}
    void graj(std::ostream& stream) const override {stream << "RapGwiazda: " << getPseudonim();}
};

Artysta* stworzArtyste(const std::string& p)
{
    if (p.front() == std::toupper(p.front()))
        return new PopGwiazda{"BTS", 1234};
    else
        return new RapGwiazda{"Ye", 4321};
}