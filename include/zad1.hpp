#pragma once

#include "catch.hpp"

#include <ostream>
#include <sstream>
#include <string>

class Artysta 
{
public:
    Artysta() : pseudonim{"Anonim"}, liczba_sluchaczy{0} {}
    Artysta(const std::string& p_, unsigned l_) : pseudonim{p_}, liczba_sluchaczy{l_} {}

    virtual void graj(std::ostream& stream) const
    {

        stream << pseudonim << ": " << liczba_sluchaczy;
    }

    const std::string& getPseudonim() const {return pseudonim;}
    unsigned getSluchacze() const {return liczba_sluchaczy;}


private:
    std::string pseudonim;
    unsigned liczba_sluchaczy; 
};