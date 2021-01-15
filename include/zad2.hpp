#pragma once

#include "zad1.hpp"

#include <cctype>

// tutaj klasy PopGwiazda, RapGwiazda oraz funkcja stworzArtyste
class PopGwiazda : public Artysta
{
  PopGwiazda(const std::string& art,unsigned int lart): Artysta(art, lart) {}
  void graj(std::ostream& str) const override {stream << "PopGwiazda: " << getPseudonim();}
};

class RapGwiazda : public Artysta
{
  RapGwiazda(const std::string& art,unsigned int lart): Artysta(art, lart) {}
  void graj(std::ostream& str) const override {stream << "RapGwiazda: " << getPseudonim();}
};

Artysta* stworzArtyste(const std::string& art)
{
    if (art.front() == std::toupper(art.front()))
        return new PopGwiazda{"BTS", 1234};
    else
        return new RapGwiazda{"Ye", 4321};
}